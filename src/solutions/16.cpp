#include <iostream>
using namespace std;

int main(){
    string a, b;
    int da, db, pa = 0, pb = 0;
    cin >> a >> da >> b >> db;
    for(int i = 0;i < a.length();i++){
        if((a[i] - '0') == da) pa = pa * 10 + da;
    }
    for(int i = 0;i < b.length();i++){
        if((b[i] - '0') == db) pb = pb * 10 + db;
    }
    cout << pa + pb;
    return 0;
}
