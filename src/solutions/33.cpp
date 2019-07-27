#include <iostream>
#include <cctype>
// 40mis+ 逻辑设计混乱
using namespace std;
int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);//保存空行
    for (int i = 0; i < s2.length(); i++){
        if (s1.find(toupper(s2[i])) != string::npos) continue;//这两个条件应该分开
        if (isupper(s2[i]) && s1.find('+') != string::npos) continue;
        cout << s2[i];
    }
    return 0;
}

// #include <cctype>
// using namespace std;
// int main() {
//   string bad, should;
//   getline(cin, bad);
//   getline(cin, should);
//   for (int i = 0, length = should.length(); i < length; i++) {
//     if (bad.find(toupper(should[i])) != string::npos) continue;
//     if (isupper(should[i]) && bad.find('+') != string::npos) continue;
//     cout << should[i];
//   }
//   return 0;
// }
