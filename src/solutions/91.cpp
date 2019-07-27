#include <iostream>
#include <string>
using namespace std;

bool judge(int a, int temp){
     int mod = 10;
     if (a == temp) return true;
     for (int k = 0; k < to_string(temp).length(); k++) {
          if (a % mod == temp) return true;
          mod = mod * 10;
     }
     return false;
}

int main(){
    int n, temp;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> temp;
        for(int j = 1; j < 10; j++) {
            int a = j * temp * temp;
            if (judge(a, temp)){
            std::cout << j << " " << a << std::endl;
            break;
            }
            else if(j == 9) std::cout << "No" << std::endl;
        }
    }
    return 0;
}
