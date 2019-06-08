
/*记事本复制粘贴 设置字体 列表框 混色结果 打开文件对话框*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b, c;
    char str[14]= {"0123456789JQK"};
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int j = a.length(), k = b.length();
    if (j > k) b.append(j - k, '0');
    else a.append(k - j, '0');
    for (int i = 0; i < a.length(); ++i)
    {
         if (i % 2 == 0)
         {
             c += str[((a[i] - '0') + (b[i] - '0')) % 13];
         }
         else{
             int temp = (a[i] - '0') - (b[i] - '0');
             if (temp < 0) temp = temp + 10;
             c += str[temp];
         }
    }
    reverse(c.begin(), c.end());
    for (int i = 0; i < c.length(); ++i)
    {
         cout << c[i];
    }
    return 0;
}