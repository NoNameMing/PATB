#include <iostream>
using namespace std;

int main(){
  int n;
  int i;
  cin >> n;
  if(n ==1 ){
	 i = 0;
	 cout << i << endl;
  }
  else{
  for(i = 1;n != 1;i = i + 1)
  {
    if (n % 2 == 0 && n != 0)
    {
      n = n / 2;
    }
    else{
      n = (3*n + 1)/2;
    };
    if(n == 1){
      cout << i << endl;
    }
  };
  }
  return 0;
}
