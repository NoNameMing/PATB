#include <iostream>
#include <vector>
using namespace std;

bool judgeNum(int j){
	 for(int x = 2;x * x <= j;x++)
	  	  if(j % x == 0) return false;
	  	  return true;
    };

int main(){

    int m,n;
    int flag = 0;
    vector<int> v;

    cin >> m >> n;
    flag = m;

    for(int i = 2;i <= 200005;i++){
        if (judgeNum(i)) v.push_back(i);
    };

    for(int i = 1;i <= n - m + 1;i++){
        if((i % 10 == 0) || (i == n - m + 1)) cout << v[flag - 1] << endl;
        else cout << v[flag - 1] << " ";
        flag++;
    };

    return 0;
}

