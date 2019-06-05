// #include <iostream>
// #include <cctype>
// #include <string>
// using namespace std;

// int main(){
// 	string s; char c;
// 	int cnt[26] = {0};
// 	getline(cin, s); // 接受空格
// 	for (int i = 0; i < s.length(); ++i) s[i] = tolower(s[i]); // 去掉空格
// 	for (int i = 0; i < s.length(); ++i) if (tolower(s[i])) cnt[s[i] - 'a']++; // 计数
// 	int max = cnt[0]; int k = 0;
// 	for (int i = 1; i < 26; ++i)
// 	{
// 		 if (cnt[i] > max) {max = cnt[i]; k = i;}
// 	}
// 	// printf("%c %d", a[k], cnt[a[k]]);
// 	c = 'a' + k;
// 	cout << c << " " << cnt[k];
// 	return 0;
// }

#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    for (int i = 0; i < s.length(); i++)
        if (islower(s[i])) a[s[i] - 'a']++;
    int max = a[0], t = 0;
    for (int i = 1; i < 26; i++) {
        if (a[i] > max) {
            max = a[i];
            t = i;
        }
    }
    printf("%c %d", t + 'a', max);
    return 0;
}

/*
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int hashTable[30] = {0};
int main(){
  string str;
  getline(cin, str);
  int len = str.length();
  for(int i = 0; i < len; i++){
    if(str[i] >= 'a' && str[i] <= 'z')
      hashTable[str[i] - 'a']++;
    else if(str[i] >= 'A' && str[i] <= 'Z')
      hashTable[str[i] - 'A']++;
  }
  int k = 0;
  for(int i = 0; i < 26; i++){
    if(hashTable[i] > hashTable[k])
      k = i;
  }
  printf("%c %d\n", 'a' + k, hashTable[k]);
  return 0;
}
*/