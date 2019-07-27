#include <iostream>
using namespace std;
//22mins 1个测试点错误
int main(){
    int n;long long p, j;int cnt = 0;//n为个数 p为参数
    long long max;
    long long min;

    cin >> n >> p;
    for (long long i = 0; i < n ; i++){

         cin >> j;
         if (i == 0) {max = min = j; cnt++;}
         if (min < j && j < max) cnt++;//中间的满足条件的没有考虑到
         if (j > max && j <= min * p) {max = j; cnt++;}
         if (j < min && max <= j * p) {min = j; cnt++;}
         
    }
    cout << cnt;
    return 0;
}
