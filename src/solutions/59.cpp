#include <iostream>
#include <cmath>
bool judge(int a) {
    if (a == 1) return false;
    int tmp = sqrt((double)a);
    for (int i = 2; i <= tmp; i++) if (a % i == 0) return false;
    return true;
}

int main() {
    int n, k, tmp;
    bool flag[10000] = {false}; // 是否查询过
    int topic[10000];
    for (int i = 0; i < 10000; i++) topic[i] = 10001;
    std::cin >> n; // 学生数量
    // 排名处理
    for (int i = 0; i < n; i++) {
         std::cin >> tmp;
         topic[tmp] = i + 1;
    }
    std::cin >> k; // 查询数量
    for (int i = 0; i  < k; i++) {
         std::cin >> tmp;
         if (topic[tmp] == 10001) {printf("%04d: ", tmp); std::cout << "Are you kidding?" << std::endl;}
         else {
             if (flag[tmp] == false) {
                 if (topic[tmp] == 1) {printf("%04d: ", tmp); std::cout << "Mystery Award" << std::endl;}
                 if (judge(topic[tmp]) && topic[tmp] != 1) {printf("%04d: ", tmp); std::cout << "Minion" << std::endl;}
                 if (topic[tmp] != 1 && !judge(topic[tmp])){printf("%04d: ",tmp); std::cout << "Chocolate" << std::endl;}
             }
             else {
                 printf("%04d: ", tmp);
                 std::cout << "Checked" << std::endl;
             }
         }
         flag[tmp] = true;
    }
    return 0;
}
