#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, PATest = "PATest";
    cin >> str;
    int cnt[6] = {0}; int k = 0, m = 0;
    for (int j = 0; j < str.length(); j++)
    {	 
    	 if (str[j] == 'P') cnt[0]++; if (str[j] == 'A') cnt[1]++;
    	 if (str[j] == 'T') cnt[2]++; if (str[j] == 'e') cnt[3]++;
    	 if (str[j] == 's') cnt[4]++; if (str[j] == 't') cnt[5]++;
    }
    for (int i = 1; i < 6; i++) {
         if (cnt[i] < cnt[k]) k = i;
    }
    int min = cnt[k];
    for (int i = 0; i < min; i++) {
    	 cout << PATest;
    }
    /* 此前无错误 */
    for (int i = 0; i < 6; i++) {
    	 int temp = cnt[i] - min; // cnt[k] 在处理之后变为0 这就是错误的原因
    	 cnt[i] = temp;
         if (cnt[i] > cnt[m]) m = i;
    }
	 /* 错误: 处理没有成功 */
    for (int j = 0; j <= str.length(); j++) {
		 for (int i = 0; i < 6; i++) {
		      if (cnt[i] > 0) {cout << PATest[i]; cnt[i]--;}
		 }
    }
	     return 0;
}
