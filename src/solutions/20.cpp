#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct moonCake
{
	float mount, price, unit;//数量 总价 单价
};

int cmp(moonCake a, moonCake b){
	return a.unit > b.unit;
};//cmp形式参数是结构体变量 这个地方用错是这次的主要错误

int main()
{
	int n, need;
    cin >> n >> need;
	float result = 0.0;
	vector<moonCake> a(n);

	for (int i = 0; i < n; ++i)
	{
		 //scanf("%f", &a[i].mount);
         cin >> a[i].mount;
	};

	for (int i = 0; i < n; ++i)
	{
		 //scanf("%f", &a[i].price);
         cin >> a[i].price;
	};

	for (int i = 0; i < n; ++i)
	{
		a[i].unit = a[i].price / a[i].mount;
	};

	sort(a.begin(), a.end(), cmp);

	for (int i = 0; i < n; ++i)
	{
         if (need == 0) break;
		 if (a[i].mount <= need){
		 	result += a[i].price;
		 } else {
		 	result += a[i].unit * need;
		 	break;
		 }
		need = need - a[i].mount;
	}

	printf("%.2f",result);//输出2位小数的简单方法\
    //cout << result << endl;

	return 0;
}
