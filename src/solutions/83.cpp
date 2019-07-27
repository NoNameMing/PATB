#include <iostream>
#include <cmath>
int main(){
    int n, tmp;
    scanf("%d", &n);
    int cnt[10000] = {0};
    for (int i = 1; i <= n; i++) {
         scanf("%d", &tmp);
         cnt[abs(tmp - i)]++;
    }
    for (int i = 9999; i >= 0; i--) if (cnt[i] >= 2) {std::cout << i << " " << cnt[i] << std::endl;}
    return 0;
}       
