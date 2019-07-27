#include <iostream>
#include <cmath>
using namespace std;
// 今日时间不充裕 先使用LC的
// 分析：func(m, n)的作用是对m/n的分数进行化简，
// gcd(t1, t2)的作用是计算t1和t2的最大公约数～在func函数中，
// 先看m和n里面是否有0（即m*n是否等于0），如果分母n=0，输出Inf，
// 如果分子m=0，输出”0″～flag表示m和n是否异号，
// flag=true表示后面要添加负号”(-“和括号”)”，再将m和n都转为abs(m)和abs(n)，
// 即取他们的正数部分方便计算～x = m/n为m和n的可提取的整数部分，
// 先根据flag的结果判断是否要在前面追加”(-“，然后根据x是否等于0判断要不要输出这个整数位，
// 接着根据m%n是否等于0的结果判断后面还有没有小分数，如果m能被n整除，表示没有后面的小分数，
// 那么就根据flag的结果判断要不要加”)”，然后直接return～如果有整数位，且后面有小分数，
// 则要先输出一个空格，接着处理剩下的小分数，先把m分子减去已经提取出的整数部分，
// 然后求m和n的最大公约数t，让m和n都除以t进行化简～最后输出“m/n”，如果flag==true还要在末尾输出”)”
long long a, b, c, d;
long long gcd(long long t1, long long t2) {
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
void func(long long m, long long n) {
    if (m * n == 0) {
        printf("%s", n == 0 ? "Inf" : "0");
        return ;
    }
    bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));
    m = abs(m); n = abs(n);
    long long x = m / n;
    printf("%s", flag ? "(-" : "");
    if (x != 0) printf("%lld", x);
    if (m % n == 0) {
        if(flag) printf(")");
        return ;
    }
    if (x != 0) printf(" ");
    m = m - x * n;
    long long t = gcd(m, n);
    m = m / t; n = n / t;
    printf("%lld/%lld%s", m, n, flag ? ")" : "");
}

int main() {
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
    func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
    func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
    func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c);
    return 0;
}
