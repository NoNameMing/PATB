#include <iostream>
using namespace std;
//32mins in total 找错7mins 思路没有问题 stirng 可以直接对比
int main(){
    int n; string name; string birthday; int cnt = 0;
    string maxdate = "2014/09/06";
    string mindate = "1814/09/06";
    string maxname; string minname;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> name >> birthday;
        if (birthday >= "1814/09/06" && birthday <= "2014/09/06") {
        cnt++;
        if (maxdate >= birthday) {maxdate = birthday;  maxname = name;}
        if (birthday >= mindate) {mindate = birthday;  minname = name;}// >= 写错
        }
    }
    cout << cnt; 
    if (cnt != 0) cout << " " << maxname << " " << minname;
    return 0;
}
