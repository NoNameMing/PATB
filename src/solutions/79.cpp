#include <iostream>
#include <string>
#include <algorithm>
bool isPalindrome(std::string x) {
    std::string tmp;
    tmp = x;
    reverse(x.begin(), x.end());
    if (tmp == x) return true;
    else return false;
}

std::string add(std::string a) {
    std::string b, c;
    b = a;
    reverse(b.begin(), b.end());
    int up = 0, sum = 0;		//up储存进位
	for (int i = a.size() - 1; i >= 0; i--) {   //从末尾开始相加
		sum = a[i] - '0' + b[i] - '0' + up;
		up = sum / 10;
		sum %= 10;
		c = (char)(sum + '0') + c;		//注意顺序有区别，如果c在前输出的是反序，需要再颠倒一次顺序
	}
	if (up > 0)
		c = (char)(up + '0') + c;
	return c;
}

int main(){
    int i = 0;
    std::string a, b, c;
    std::cin >> a;
    while(i < 10) {
         if (isPalindrome(a)) {std::cout << a << " is a palindromic number."; break;}
         b = a;
         reverse(b.begin(), b.end());
         std::cout << a << " + " << b << " = " << add(a) << std::endl;
         a = add(a);
         if (i == 9 && isPalindrome(a) == false) std::cout << "Not found in 10 iterations.";         
         i++;
    }
    return 0;
}
