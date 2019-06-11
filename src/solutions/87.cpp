#include <iostream>
#include <vector>
int main(){
    int N, cnt = 0, tmp = 0;
    std::vector<int> v;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
         tmp = (i / 2) + (i / 3) + (i / 5);
         v.push_back(tmp);
         cnt++;
    }
    for (int i = 2; i <= v.size(); i++) {
         if (v[i] == v[i - 1]) cnt--;
    }
    std::cout << cnt;
    return 0;
}