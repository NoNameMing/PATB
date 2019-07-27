#include <iostream>
using namespace std;
// 30mins and more 
// 粗心的地方: 没乘权重
bool isTrue(string a){
     int sum = 0;
     int temp;
     int v[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
     string m = "10X98765432";
     for(int i = 0; i < 17; i++){
         if (a[i] == 'X') return false;
         sum += (a[i] - '0') * v[i];
     }
     temp = sum % 11;
     if ((a[17] - '0') == (m[temp] - '0')) return true;//这里a[17]没给括号
     else return false;
}

int main(){
    int n, cnt = 0; string s;
    cin >> n;
    for (int i = 0; i < n; i++){
         cin >> s;
         if (isTrue(s)) {cnt++;}
         else cout << s << endl;
    }
    if (cnt == n) cout << "All passed";
    return 0;
}
