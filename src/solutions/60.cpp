#include <iostream>
#include <vector>
#include <algorithm>
bool cmp(int a, int b) {return a > b;}
int main(){
    int n, tmp, E = 0;
    scanf("%d", &n);
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
         scanf("%d", &tmp);
         v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++){
         if (v[i] <= E + 1) break;
         E++;
    }
    printf("%d", E);
    return 0;
}
