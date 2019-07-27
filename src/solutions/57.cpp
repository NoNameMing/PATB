#include <iostream>
using namespace std;
int main(){
    string str;
    int n = 0, tmp, cnt1 = 0, cnt0 = 0;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 'a' && str[i] <= 'z') {tmp = str[i] - 'a' + 1; n += tmp;}
        if (str[i] >= 'A' && str[i] <= 'Z') {tmp = str[i] - 'A'+ 1; n += tmp;}
    }
    while (n != 0) {
        if (n % 2 == 1) cnt1++;
        if (n % 2 == 0) cnt0++;
        n /= 2;
    }
    cout << cnt0 << " " << cnt1;
    return 0;
}
