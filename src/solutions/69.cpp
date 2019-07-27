#include <iostream>
#include <map>
int main(){
    int m, n, s, t = 0; // 转发总量 中奖间隔 第一位中奖者的序号 是否有人中奖
    std::string str;
    scanf("%d %d %d", &m, &n, &s);
    int flag[m] = {0};// 标记是否已经中奖的数组
    // std::map<std::string, int> flag;
    for (int i = 1; i <= m; i++) {
         std::cin >> str;
         if (flag[str] == 1) s += 1;
         if (i == s && flag[str] == 0) {
             t = 1;
             std::cout << str << std::endl;
             flag[str] = 1;
             s += n;
         }
    }
    if (t == 0) std::cout << "Keep going...";
    return 0;
}
