#include <iostream>
void unzip(std::string str) {
    int n = 1;
    for (int i = 0; i < str.length(); i++) {
         if (str[i] - '0' >= 0 && str[i] - '0' <= 9) {
             if (str[i - 1] - '0' >= 0 && str[i - 1] - '0' <= 9) n = n * 10 + str[i] - '0';
             else n = str[i] - '0';
         }
         else {
             for(int j = 0; j < n; j++) {
                 std::cout << str[i];
             }
             n = 1;
         }
    }
}

void zip(std::string str) {
    int tmp = 1;
    for (int i = 0; i < str.length(); i++) {
         if (str[i + 1] == str[i]) {tmp++; continue;}
         if (str[i + 1] != str[i] && tmp != 1) {
             for (int i = 0; i < tmp; i++) {
                  std::cout << tmp;
                  tmp = 1;
                  continue;
             }
         }
         if (str[i + 1] != str[i] && tmp == 1) {std::cout << str[i]; continue;}
    }
}

int main(){
    char judge;
    std::string str;
    std::cin >> judge; 
    getchar();
    getline(std::cin, str);
    if (judge == 'C') zip(str);
    if (judge == 'D') unzip(str);
    return 0;
}
