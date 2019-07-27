#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, j, k, max = 0, maxindex = 1;
    map<int, int> m;
    cin >> n;

    for (int i = 1; i <= n; i++){
         cin >> j;
         cin >> k;
         m[j] += k; 
    }

    for (int i = 1; i <= n; i++){
         if (m[i] > max) {max = m[i]; maxindex = i;}
    }

    cout << maxindex << " " << max;
    return 0;
}
