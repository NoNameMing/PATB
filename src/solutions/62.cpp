#include <iostream>
#include <vector>
int gkd(int a, int b){
    return b == 0 ? a : gkd(b, a % b);
}
int main(){
    int n1, m1, n2, m2, k;
    std::vector<int> res;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if (n1 * m2 > n2 * m1) { // 处理第一个输入小于第二个的情况 坑一
        std::swap(n1, n2);
        std::swap(m1, m2);
    }
    for (int i = 1; i < k; i++) {
         if (i * m1 > k * n1 && i * m2 < k * n2 && gkd(k, i) == 1) res.push_back(i);
    }
    for (int i = 0; i < res.size(); i++) {
         if (i != 0) printf(" "); // 控制括号 常见PAT坑
         printf("%d/%d", res[i], k);
    }
    return 0;
}
