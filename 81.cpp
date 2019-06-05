#include <iostream>
int main(){
    int n;
    std::cin >> n;
    std::string str;
    for (int i = 0; i < n; i++) {
        bool aNum = 0, aLetter = 0, aLegal = 0;
        std::cin >> str;
        if (str.length() < 6) {std::cout << "Your password is tai duan le." << std::endl; continue;}
        else {
            for (int j = 0; j < str.length(); j++) {
                if ((str[j] - '0') >=0 && (str[j] - '0') <=9) aNum = 1; // 有无数字
                if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')) aLetter = 1; // 有无字母
                if (aNum == 0 && aLetter == 0 && str[j] != '.') aLegal = 1; // 有无不合法字符                            
                if (j == str.length() - 1){
                if (aLegal == 1) std::cout << "Your password is tai luan le." << std::endl;
                else {
                    if (aNum == 1 && aLetter == 0) std::cout << "Your password needs zi mu." << std::endl;
                    if (aNum == 0 && aLetter == 1) std::cout << "Your password needs shu zi." << std::endl;
                    if (aNum == 1 && aLetter == 1) std::cout << "Your password is wan mei." << std::endl;

                    }
                }
            }
        }
    }
    return 0;
}