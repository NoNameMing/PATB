#include <iostream>
#include <string>
using namespace std;

int main(){
	string boss, buyer;
	cin >> boss;
	cin >> buyer;
	int cntBoss[100000];
	int cntBuyer[100000];
	int flag[100000];
	int lack = 0;
	int more = 0;
	/* 输入并对每个boss buyer出现的字符进行计数 */
	for (int i = 0; i < boss.length(); i++){
		 cntBoss[boss[i]]++;
	}

	for (int i = 0; i < buyer.length(); i++)
	{
		 cntBuyer[buyer[i]]++; flag[buyer[i]] = 0;
	}

	/* 对比各个字符出现次数 决定输出 yes or no */
	for (int i = 0; i < buyer.length(); i++){
		 if (cntBuyer[buyer[i]] > cntBoss[buyer[i]] && flag[buyer[i]] == 0) {
		 	lack += (cntBuyer[buyer[i]] - cntBoss[buyer[i]]);
		 	flag[buyer[i]] = 1; 
		 }
		 if (cntBuyer[buyer[i]] <= cntBoss[buyer[i]] && i == buyer.length() - 1 && lack == 0) {
		 	more += (boss.length() - buyer.length());
		 }
	}

	if (lack > 0) cout << "No" << " " << lack;
	else cout << "Yes" << " " << more;
	return 0;
}
