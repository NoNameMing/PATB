#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    int n, m, tmp;
    std::cin >> n >> m;
    std::vector<int> score;
    std::vector<int> out;
    for (int i = 0; i < n; i++) score.push_back(0);
    for (int i = 0; i < m; i++) {
         for (int j = 0; j < n; j++) {
              scanf("%d", &tmp);
              score[j] += tmp;
         }
    }
    sort(score.begin(), score.end());
    std::cout << score[n - 1] << std::endl;
    for (int i = 0; i < n; i++) {
         if (score[i] == score[n - 1]) out.push_back(i + 1);
    }
    sort(out.begin(), out.end());
    for (int i = 0; i < out.size(); i++) {
        if (i == out.size() - 1) {std::cout << out[i]; break;}
        std::cout << out[i] << " ";
        }
    return 0;
}
