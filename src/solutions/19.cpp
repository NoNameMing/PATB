#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool DescendingOrder(char a, char b){
    return a > b;//降序
}

int main(){
    string a, m, n;//m大 n小
    int x = 0, y = 0;
    cin >> a;
    a.insert(0, 4 - a.length(), '0');//补0
    while(x - y != 6174){
    	m = a;n = a;
	    sort(m.begin(),m.end(),DescendingOrder);
	    x = stoi(m);
	    sort(n.begin(),n.end());
	    y = stoi(n);
	    a = to_string(x - y);
	    a.insert(0, 4 - a.length(), '0');//补0
	    cout << m << " - " << n << " = " << a << endl;
	    if(x - y == 0 || x - y == 6174) break;
    }
    return 0;
}
