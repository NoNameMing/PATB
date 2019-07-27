#include <iostream>
using namespace std;
// 写题20mins 改题1h 细心啊得
int main(){
    int n, m;
    scanf("%d", &n);
    string sno[n]; int test[n]; int seat[n]; int coutArray[n]; // int sno[n] 超时
    for (int i = 0; i < n; ++i) {
         cin >> sno[i] >> test[i] >> seat[i];
    }
    cin >> m;
    int temp;
    for (int i = 0; i < m; ++i) { //开始不是这个条件
         scanf("%d", &temp);
         for (int j = 0; j < n; ++j) {
              if (temp == test[j]) // 条件没写
              cout << sno[j] << " " << seat[j] << endl;
        }
    }
    return 0;
}
