#include <iostream>
#include <string>
using namespace std;

string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"###s#", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
string s;
int len;
void func1(int t) {
	 if (t / 13) cout << b[t / 13];
	 if ((t / 13) && (t % 13)) cout << " ";
	 if (t % 13 || t == 0) cout << a[t % 13];
}
void func2() {
	 int t1 = 0, t2 = 0;
	 string s1 = s.substr(0, 3), s2;
	 if (len > 4) s2 = s.substr(4, 3);
	 for (int i = 1; i <= 12; ++i)
	 {
	 	  if (s1 == a[i] || s2 == a[i]) t2 = i;
	 	  if (s1 == b[i]) t1 = i;
	 }
	 cout << t1 * 13 + t2;
}
int main() {
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
	     getline(cin, s);
	     len = s.length();
	     if (s[0] >= '0' && s[0] <= '9')
	         func1(stoi(s));
	     else
	         func2();
	     cout << endl;
    }
	return 0;
}

