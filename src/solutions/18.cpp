#include <iostream>
using namespace std;
// C 代表“锤子”、J 代表“剪刀”、B 代表“布”

int main(){
    int n, as = 0, ap = 0, af = 0, bs = 0, bp = 0, bf = 0;
    int aa[3], bb[3];
    int aMax = 0, bMax = 0;
    string out = "BCJ";//CJB 
    aa[0] = aa[1] = aa[2] = 0;// 0C 1J 2B
    bb[0] = bb[1] = bb[2] = 0;
    char a, b;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a >> b;
        if(a == 'C' && b == 'J'){
           as = as + 1;
           aa[1]++;
        };
        if(a == 'J' && b == 'B'){
           as = as + 1;
           aa[2]++;
        };
        if(a == 'B' && b == 'C'){
           as = as + 1;
           aa[0]++;
        };
        if(a == 'J' && b == 'C'){
           bs = bs + 1;
           bb[1]++;
        };
        if(a == 'B' && b == 'J'){
           bs = bs + 1;
           bb[2]++;
        };
        if(a == 'C' && b == 'B'){
           bs = bs + 1;
           bb[0]++;
        };
        if(a == b){
            ap = ap + 1;
            bp = bp + 1;
        };
    };

        cout << as << " " << ap << " " << bs << endl;
        cout << bs << " " << bp << " " << as << endl;

        for(int i = 0;i < 3;i++){
            if(aa[i] > aa[aMax]) aMax = i;
            if(bb[i] > bb[bMax]) bMax = i;
        }

        cout << out[aMax] << " " << out[bMax];

    return 0;
}
