#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
struct node {
    std::string t;
    int value;
};
bool cmp(const node &a, const node &b) {
    return a.value != b.value ? a.value > b.value : a.t < b.t;
}
int main(){
    int n, k, num;
    std::string s;
    std::cin >> n >> k;
    std::vector<node> v(n);
    for (int i = 0; i < n; i++) std::cin >> v[i].t >> v[i].value;
    for (int i = 1; i <= k; i++) {
         std::cin >> num >> s;
         printf("Case %d: %d %s\n", i, num, s.c_str());
         std::vector<node> ans;
         int cnt = 0, sum = 0;
         if (num == 1) {
             for (int j = 0; j < n; j++) if (v[j].t[0] == s[0]) ans.push_back(v[j]);   
         }
         else if (num == 2) {
             for (int j = 0; j < n; j++) {
                 if (v[j].t.substr(1, 3) == s) {
                     cnt++;
                     sum += v[j].value;
                 }
             }
             if (cnt != 0) printf("%d %d\n", cnt, sum);
         }
         else if (num == 3) {
             std::unordered_map<std::string, int> m;
             for (int j = 0; j < n; j++) 
                  if (v[j].t.substr(4, 6) == s) m[v[j].t.substr(1, 3)]++;
             for (auto it : m) ans.push_back({it.first, it.second});
         }
         sort(ans.begin(), ans.end(), cmp);
         for (int j = 0; j < ans.size(); j++) {
              printf("%s %d\n", ans[j].t.c_str(), ans[j].value);
         }
         if (((num == 1 || num == 3) && ans.size() == 0) || (num == 2 && cnt == 0)) printf("NA\n");
    }
    return 0;
}
