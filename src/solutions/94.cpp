#include <iostream>
bool judge(int x) {
    if (x == 1 || x == 0) return false;
    for (int i = 2; i * i <= x; i++) if (x % i == 0) return false;
    return true;
}
int main(){
    int l, k, tmp = 0;
    std::string str, out;
    std::cin >> l >> k;
    std::cin >> str;
    for (int i = 0; i < l; i++) {
          for (int j = i; j < k + i; j++) {
               if (j > str.length()) {std::cout << "404"; return 0;}
               tmp = tmp * 10 + str[j] - '0';
               out += str[j];
          }
          if (judge(tmp)) {std::cout << out; return 0;}
          else{
               tmp = 0;
               std::string newout;
               out = newout;
          }
    }
    return 0;
}
