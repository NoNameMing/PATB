#include <iostream>
#include <vector>
int main(){
    int n, tmp;
    std::cin >> n;
    std::vector<int> save(n + 1);
    for (int i = 1; i <= n; i++) std::cin >> save[i];
    for (int i = 1; i <= n; i++) {
         for (int j = i + 1; j <= n; j++) {
              std::vector<int> lie, a(n + 1, 1); // a表示是好人还是坏人 1好人 -1坏人
              a[i] = a[j] = -1;
              for (int k = 1; k <= n; k++) {
                   if (save[k] * a[abs(save[k])] < 0) lie.push_back(k);
              }
              if (lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0) {std::cout << i << " " << j; return 0;}
         }
    }
    std::cout << "No Solution";
    return 0;
}
