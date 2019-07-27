#include <iostream>
using namespace std;
int main(){
    int d, n, j; // d 的 外观数列的第 n 项
    string s;
    cin >> s >> n;
    for (int cnt = 1; cnt < n; cnt++) {
         string t;
         for (int i = 0; i < s.length(); i = j) {
              for (j = i; j < s.length() && s[j] == s[i]; j++);
              t += s[i] + to_string(j - i);
         }
         s = t;
    }
    std::cout << s;
    return 0;
}
