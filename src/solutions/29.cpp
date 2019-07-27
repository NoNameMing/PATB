#include <iostream>
#include <cctype>
using namespace std;
// string::nops就是string的最后 意味着找到最后没找到；
// string ans 可以直接加一个string上去
// ans中是大写 所以用toupper
// 防止重复的好办法： 在ans中也找有没有那个字母的大写
// 13mins结束
int main(){
    string s1, s2, ans;
    cin >> s1 >> s2;
    for(int i = 0;i < s1.length();i++){
        if (s2.find(s1[i]) == string::npos && ans.find(toupper(s1[i])) == string::npos)
            ans += toupper(s1[i]);
    }
    cout << ans;
    return 0;
}


