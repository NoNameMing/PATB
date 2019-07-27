#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<string> > v;
    for(int i = 0; i < 3; i++) {
        string s;
        getline(cin, s);
        int j = 0, k = 0;
        vector<string> row;
        while (j < s.length()) {
            if(s[j] == '[') {
              while (k++ < s.length()) {
                  if (s[k] == ']') {
                      row.push_back(s.substr(j + 1, k - j - 1));
                      break;
                    }
                }
            }
            j++;
        }
        v.push_back(row);
    }
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int a, b, c, d, e;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if(a > v[0].size() || b > v[1].size() || c > v[2].size() || d > v[1].size() || e > v[0].size() || a == 0 || b == 0 || c == 0 || d == 0 || e == 0) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        cout << v[0][a-1] << "(" << v[1][b-1] << v[2][c-1] << v[1][d-1] << ")" << v[0][e-1] << endl;
    }
    return 0;
}
