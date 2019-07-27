#include <iostream>
#include <algorithm>
#include <vector>
int main(){
    int n, res = 0;
    std::cin >> n;
    // std::vector<int> len(n);
    int len[n];
    for (int i = 0; i < n; i++) std::cin >> len[i];
    sort(len.begin(), len.end());
    res = len[0];
    for (int i = 0; i < n; i++) res = (len[i] + res) / 2;
    std::cout << res;
    return 0;
}
