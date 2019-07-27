#include <iostream>
using namespace std;

int main(){
    int n, m;
    char c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {cout << c; if (i == n - 1) cout << endl;}
    m = n / 2;
    if (n % 2 >= 1) m += 1;
    for (int i = 0; i < m - 2; i++){
         for (int j = 0; j < n; j++){
              if (j == 0) cout << c;
              if (j == n - 1) cout << c << endl;
              if (j > 0 && j < n - 1) cout << ' ';
         };
    };
    for (int i = 0; i < n; i++) cout << c;
    return 0;
}
