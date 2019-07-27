// #include <iostream>
// using namespace std;
// int main(){
//     string a, b, res;
//     getline(cin, a);
//     getline(cin, b);
//     res = a + b;
//     for (int i = 0; i < res.length(); i++) {
//          if (res.find(res[i]) < i) continue;
//          else cout << res[i];
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    string a, b, res;
    bool find[200] = {0};
    getline(cin, a);
    getline(cin, b);
    res = a + b;
    for (int i = 0; i < res.length(); i++) {
         if (find[res[i]] == 0) {cout << res[i]; find[res[i]] = 1;}
         else continue;
    }
}
