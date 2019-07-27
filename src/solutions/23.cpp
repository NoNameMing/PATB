#include <iostream>
using namespace std;

int main(){
    int n, flag = 0;
    int a[10];
    for (int i = 0; i < 10;i++){
         cin >> n;
         a[i] = n;
    };

    for (int i = 1; i < 10;i++){
         if(a[i] != 0){
             for (int j = 0; j <= a[i];j++){
                 if(j == 1 && a[0] != 0 && flag == 0){
                     for(int k = 0; k < a[0];k++){
                         cout << 0;
                     }
                     flag = 1;
                 };
                 if (j == a[i]) break;
                 cout << i;
             }
         }
    };

    return 0;
}
