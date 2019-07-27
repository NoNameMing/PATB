#include <iostream>
#include <map>
#include <vector>
int main(){
    int n, m, k, tmp1, tmp2; // n 不相容 m 集装箱货品清单清单数
    std::map<int, std::vector<int>> key;
    std::cin >> n >> m;
    for (int i = 0;i < n; i++) {
         std::cin >> tmp1 >> tmp2;
         key[tmp1].push_back(tmp2);
         key[tmp2].push_back(tmp1);
    }
    for (int i = 0; i < m; i++) {
         bool flg = true;
         std::cin >> k;
         std::vector<int> cargo(k);
         int flag[100000] = {0};
         for (int i = 0; i < k; i++) {
              std::cin >> cargo[i];
              flag[cargo[i]] = 1;
         }
         for (int i = 0; i < cargo.size(); i++) {
              for (int j = 0; j < key[cargo[i]].size(); j++) {
                   if (flag[key[cargo[i]][j]] == 1) flg = false; 
              }
         }
         if (flg) std::cout << "Yes" << std::endl;
         else std::cout << "No" << std::endl;
    }
    return 0;
}
