#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    int a1 = 0;
    int a2 = 0;
    int j = 0;
    int n = 0;
    int k = 0;
    int a3 = 0;
    //int a4 = 0;
    int a41 = 0;
    int a5 = 0;
    double a4 = 0.0;
    cin >> n;//输入个数
    for(int i = 0;i < n; i++){
        cin >> k;//输入数字
        if((k % 5 == 0) & (k % 2 == 0)) {a1 = a1 + k;};//a1 
        if(k % 5 == 1) {a2 = a2 + (k * pow(-1,j));j++;};//a2
        if(k % 5 == 2) {a3++;};//a3
        if(k % 5 == 3) {a41++;a4 = k + a4;}//a4 还没求平均数
        if(k % 5 == 4) {
            if (a5 < k){
                a5 = k;
            }
        }
    }
        if ( a1 != 0 ) {cout<< a1 <<" ";}; if ( a1 == 0 ) {cout<< "N" <<" ";};
        if ( j != 0 )  {cout<< a2 <<" ";}; if ( j == 0 ) {cout<< "N" <<" ";};
        if ( a3 != 0 ) {cout<< a3 <<" ";}; if ( a3 == 0 ) {cout<< "N" <<" ";};
        if ( a4 != 0 ) {cout<< fixed <<setprecision(1) << a4/a41 << " ";}; if ( a4 == 0 ) {cout<< "N" <<" ";};
        if ( a5 != 0 ) {cout<< a5;}; if ( a5 == 0 ) {cout<< "N";};
    return 0;
}

