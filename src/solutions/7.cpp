#include <iostream>
using namespace std;

bool judgeNum(unsigned n){//素数判断函数
	  for(int i = 2;i * i <= n;i++)
	  	  if(n % i == 0)return false;
	  	  return true;
}

int main(){
	  int cnt;
	  unsigned n;cin >> n; 
	  for (int i = 5; i <= n; i++)
           if (judgeNum(i-2) && judgeNum(i)) cnt++;
               cout << cnt;
	  return 0;
}
