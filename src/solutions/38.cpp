#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, k;
    int m[100000], score[100000];
    cin >> n;
    for (int i = 0; i < n; i++) {
         cin >> m[i]; score[m[i]]++; // score[m[i]] 解决循环嵌套的问题 m[i] 做 score[]的下标
    }

    cin >> k;
    int l[k];
    // 不能嵌套循环 待改进
    for (int i = 0; i < k; i++) {
         cin >> l[i];
    }

    for (int i = 0; i < k; i++){
        if (i == k - 1) {cout << score[l[i]]; break;}
        cout << score[l[i]] << " ";
    }
    return 0;
}
