#include <iostream>
using namespace std;

bool judge(long long int a,long long int b,long long int c){
     if (a + b > c) return true;
     return false;
};

int main(){
    int n;
    long long int a,b,c;
    cin >> n;
    bool arr[n];
    
    for(int i = 0; i < n;i++){
        cin >> a >> b >> c;
        arr[i] = false;
        if (judge(a,b,c)) arr[i] = true;
        if(arr[i]) {cout<<"Case"<<" "<<"#"<<i+1<<":" <<" "<<"true"<<endl;}
        else {cout<<"Case"<<" "<<"#"<<i+1<<":" <<" "<<"false"<<endl;}
    }

    // for(int i = 0; i < n;i++){
    //     if(arr[i]) {cout<<"Case"<<" "<<"#"<<i+1<<":" <<" "<<"true"<<endl;}
    //     else {cout<<"Case"<<" "<<"#"<<i+1<<":" <<" "<<"false"<<endl;}
    // }
    return 0;
};
