#include <iostream>
int main(){
    int n, m, temp;
    std::cin >> n >> m;
    int cnt[n] = {0};
    int score[m] = {0};
    bool judge[m] = {0};
    bool tmp;
    for (int i = 0; i < m; i++) {
         std::cin >> temp;
         score[i] = temp;
    }
    for (int i = 0; i < m; i++) {
         std::cin >> tmp;
         judge[i] = tmp;
    }
    for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
         std::cin >> tmp;
         if (tmp == judge[j]) cnt[i] += score[j];
         }
    }
    for (int i = 0; i < n; i++) {
         std::cout << cnt[i] << std::endl;
    }
    return 0;
}
