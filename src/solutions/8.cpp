#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m;
    m = m % n;
    //if( n < 1 || n > 100 || m < 0) exit(0);
    vector<int> v(n);
    //int v[10000];
    vector<int> b(n);
    //int b[10000];
    for(int i = 0;i < n;i++){
        cin >> k;
        v[i] = k;
    }

    for(int i = 0;i < m;i++){
        b[i] = v[n-m+i];
        cout << b[i] <<" ";
    }

    for(int i = 0;i < n - m;i++){
        cout << v[i];
        if(i == n - m - 1) break;
        cout<<" ";
    }

    return 0;
}


