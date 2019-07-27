#include <iostream>
int main() {
    int n;
    scanf("%d", &n); double sum = 0, temp;
    for (int i = 0; i <= n; i++) { 
         scanf("%lf", &temp);
         sum += temp * (i + 1) * (n - i);
    }
    printf("%.2f", sum);
    return 0;
}
