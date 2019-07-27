#include <iostream>
#include <vector>
using namespace std;

int main(){
    string a;
    int b, r = 0, temp = 0, len;
    vector<int> q;
    cin >> a >> b;
    len = a.length();

    for(int i = 0;i < a.length();i++){
           temp = (a[i] - '0') + r * 10;
           if (i == 0 && a.length() == 1) q.push_back(temp / b);
           if (i == 0 && temp / b != 0) q.push_back(temp / b);
           if (i != 0) q.push_back(temp / b);
           r = temp % b;
    };

    for(int i = 0;i < q.size();i++){
        cout << q[i];
    };

    cout << " " << r;
    return 0;
}
