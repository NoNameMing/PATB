#include <iostream>
#include <cmath>
void judge(double m, double j) {
     if (m == j) std::cout << "Ping";
     if (m > j) std::cout << "Gai";
     if (m < j) std::cout << "Cong";
}

int main(){
    int m, n, o, x, y; // n甲 o乙 p丙
    double p;
    std::cin >> m >> x >> y;
    for (int i = 99; i >= 10; i--) {
         n = i;
         o = n % 10 * 10 + n / 10;
        //  p = abs(n - o) / x;
         p = abs(n - o) * 1.0 / x;
         if (o == y * p) {
             std::cout << n;
             judge(m, n); judge(m, o); judge(m, p);
             return 0;
         }
    }
    std::cout << "No Solution";
    return 0;
}
