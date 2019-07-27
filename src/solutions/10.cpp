#include <iostream>

using namespace std;
int main(){
    int n,k,flag = 0;//n 系数 k 指数

    while(cin >> n >> k) {
        //if (n == 0) break;
        if (k != 0){
        if (flag == 1) cout<<" "; 
        cout << n * k << " " << k - 1;
        flag = 1;
        }
        if (flag == 0) cout << "0 0";
    }

    // for(int j = 0;j < v2.size();j++){
    //     if (v2[j] != 0){
    //     if (j == v2.size()-1) cout << v2[j] <<" "<< v1[v2[j]];
    //     cout << v2[j] << " " << v1[v2[j]] << " ";
    //     }
    // }

    // for(int i = -1000;i <= 1000;i++){
    //     if (){
    //         cout << arr[i] << " ";
    //     }
    //     else if (i == n / (k + 1)){
    //         cout << arr[i];
    //     }
    // }


    return 0;
}
