#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[10000];
bool cmp(int a,int b){return a > b;}
int main(){
  int k, n, flag = 0;//左空
  cin >> k;
  vector<int> v(k);//存输入样例
  for (int i = 0; i < v.size(); i++) {
       cin >> n;
       v[i] = n;
       while(n != 1){
       if(n % 2 != 0) n = (3 * n + 1);
       n = n / 2;//省略else的精简写法
       //if(arr[n] == 1)break;
       arr[n] = 1;
       //至此 输入数组 和 记录过程数组 写完 接下来排序 输出即可
     }
  }
  sort(v.begin(),v.end(),cmp);
  for(int i = 0;i < v.size(); i++){
       if(arr[v[i]] == 0){
          if (flag == 1) cout << " ";//flag只是用来控制空格的
          cout << v[i];
          flag = 1;
       }
  }
  return 0;
}

