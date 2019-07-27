#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <unordered_map>

struct school{
    std::string sch;// 学校校名
    int score, totalstu; // 加权分数 学生人数
};

bool cmp(school a, school b) { // 输出规则
    if (a.score != b.score) return a.score > b.score;
    else if (a.totalstu != b.totalstu) return a.totalstu < b.totalstu;
    else return a.sch < b.sch;
}

int main(){
    int n;
    std::cin >> n;
    std::unordered_map<std::string, int> cnt;
    std::unordered_map<std::string, double> sum;
    for (int i = 0; i < n; i++) {
         std::string id, school;
         double tmpscore;
         std::cin >> id >> tmpscore >> school;
         for (int j = 0; j < school.length(); j++) {
              school[j] = tolower(school[j]);
         }
         if (id[0] == 'B') tmpscore = tmpscore / 1.5;
         else if (id[0] == 'T') tmpscore *= 1.5;
         sum[school] += tmpscore;
         cnt[school]++;
    }
    std::vector<school> ans;
    for (auto it = cnt.begin(); it != cnt.end(); it++) 
         ans.push_back(school{it->first, (int)sum[it->first], cnt[it->first]});
    sort(ans.begin(), ans.end(), cmp);
    int rank = 0, pres = -1;
    printf("%d\n", (int)ans.size());
    for (int i = 0; i < ans.size(); i++) {
         if (pres != ans[i].score) rank = i + 1;
         pres = ans[i].score;
         printf("%d ", rank);
         std::cout << ans[i].sch;
         printf(" %d %d\n", ans[i].score, ans[i].totalstu);
    }
    return 0;
}
