#include <iostream>
#include <string>
int main(){
    int n, tmp;
    std::string str, res;
    std::cin >> n;
    std::getchar();
    for (int i = 0; i < n; i++) {
        getline(std::cin, str);
        int j = str.find('T');
        tmp = j;
        tmp -= 2;
        if (str[tmp] == 'A') res += '1';
        if (str[tmp] == 'B') res += '2';
        if (str[tmp] == 'C') res += '3';
        if (str[tmp] == 'D') res += '4';
    }
    std::cout << res;
    return 0;
}