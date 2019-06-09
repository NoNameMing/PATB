#include <iostream>
#include <cmath>
int main(){
    int n, a, b;
    double max = 0, res;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> a >> b;
        res = sqrt(a * a + b * b);
        if (max < res) max = res;
    }
    printf("%.2f", max);
    return 0;
}