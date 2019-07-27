#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    map<int, int > m;
    for (int i = 0; i < s.length(); i++){
         m[s[i] - '0'] += 1;
    };
    for (map<int, int >::iterator it = m.begin(); it != m.end(); it++){
         cout << it->first << ":" << it->second << endl;//我一直在疑问 用迭代器会正确从开始找到结尾吗？ 答案是会的，他是从开头找到结尾
    };

    return 0;
}
