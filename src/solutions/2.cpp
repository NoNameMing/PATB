#include <iostream>
#include <string>
using namespace std;

int main() {
	string num;//输入数字
	string numcn[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	string strsum;//sum转化为string给strsum使用
	int sum = 0;//总数
	cin >> num;

	//分离各个输入的额数字并相加求和
	for (int i = 0; i < num.length(); ++i) {
		sum += (num[i] - '0');
	}

	//cout << sum;
	//1234567890987654321123456789

	
	strsum = to_string(sum);

	//分离输入的各个数字并按中文输出
	for (int i = 0; i < strsum.length(); ++i) {
		cout << numcn[strsum[i] - '0'];
		if (i != strsum.length() - 1)cout << " ";
	}
	
	return 0;
}
