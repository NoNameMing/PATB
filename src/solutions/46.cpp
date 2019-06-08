#include <iostream>
using namespace std;

int main(){
    int n, cntA = 0, cntB = 0;
    int a1, a2, b1, b2;
    cin >> n;
    for (int i = 0; i < n; i++){
         cin >> a1 >> a2 >> b1 >> b2;
         if(a2 != b2) {
            if (a2 == a1 + b1) cntB++;
            if (b2 == a1 + b1) cntA++;
         }
    }
    cout << cntA << " " << cntB;
    return 0;
}