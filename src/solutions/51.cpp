#include <iostream>
#include <cmath>
int main(){
    double A, B, r1, p1, r2, p2;
    scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
    A = r1 * cos(p1) * r2 * cos(p2) - r1 * r2 * sin(p1) * sin(p2);
    B = r1 * r2 * sin(p1) * cos(p2) + r1 * r2 * cos(p1) * sin(p2);
    // if (A + 0.005 >= 0 && A < 0)
    //     printf("0.00");
    // else
    //     printf("%.2f", A);
    // if(B >= 0)
    //     printf("+%.2fi", B);
    // else if (B + 0.005 >= 0 && B < 0)
    //     printf("+0.00i");
    // else
    //     printf("%.2fi", B);
    if (B < 0) printf("%.2f-%.2f", A, B);
    if (B > 0) printf("%.2f+%.2f", A, B);
    return 0;
}
