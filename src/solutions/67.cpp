#include <iostream>
int main(){
    std::string ans, tmp;
    int n;
    std::cin >> ans >> n;
    std::cin.get();
    for(int i = 0; i < n; i++) {
        getline(std::cin, tmp);
        if (tmp == "#") return 0;
        if (tmp == ans) {
            std::cout << "Welcome in" << std::endl;
            return 0;
        }
        else std::cout << "Wrong password: " << tmp << std::endl;
        if (i == n - 1 && tmp != ans) {
            std::cout << "Account locked";
            return 0;
        }
    }
    return 0;
}
