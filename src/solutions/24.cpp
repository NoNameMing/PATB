#include <iostream>
using namespace std;

int main(){
	string s;
	int i = 0;int cnt = 0;//此处cnt一定给一个0！
	cin >> s;

	while (s[i] != 'E') i++;
	int n = stoi(s.substr(i + 1));
	string t = s.substr(1, i - 1);
	if (s[0] == '-') cout << "-";

	// cout << "n is: " << n << endl;
	// cout << "t is: " << t << endl;

	if (n < 0){
		cout << "0.";
		for (int j = 0; j < abs(n) - 1; j++) cout << '0';//.后面的0应该少一个 例如 1.2 * 0.1
		for (int k = 0; k < t.length(); k++){
			if (t[k] != '.') cout << t[k];
		}
	} else{
		cout << t[0];
		for (int l = 2; l < t.length(); l++, cnt++){
			if (cnt == abs(n)) cout << '.';
			cout << t[l];
		}
		for (int i = 0; i < abs(n) - cnt; i++) cout << '0';

		// cout << t[0];
  //       int cnt, j;
  //       for (j = 2, cnt = 0; j < t.length() && cnt < n; j++, cnt++) cout << t[j];
  //       if (j == t.length()) {
  //           for (int k = 0; k < n - cnt; k++) cout << '0';
  //       } else {
  //           cout << '.';
  //           for (int k = j; k < t.length(); k++) cout << t[k];
  //       }

	}

	return 0;
}



