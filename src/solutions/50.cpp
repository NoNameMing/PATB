#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int cmp(int a, int b) {return a > b;}
int main(){
	int m, n, N, t = 0;
	scanf("%d", &N);
	for (n = sqrt((double)N); n >= 1; n--) {
		 if (N % n == 0){
		 	m = N / n;
		 	break;
		 }
	}
	vector<int> a(N); // a 存输入值
	for (int i = 0; i < N; i++) scanf("%d", &a[i]);
	sort(a.begin(), a.end(), cmp);
	vector<vector<int> > b(m, vector<int>(n)); // b 二维数组 螺旋数组
	int level = m / 2 + m % 2;
	for (int i = 0; i < level; i++)
	{
		 for (int j = i; j < n - i && t < N; j++) b[i][j] = a[t++];
		 for (int j = i + 1; j < m - 1 - i && t < N; j++) b[j][n - 1 - i] = a[t++];
		 for (int j = n - i - 1; j >=i && t < N; j--) b[m - i - 1][j] = a[t++];
		 for (int j = m - 2 -i; j >= i + 1 && t < N; j--) b[j][i] = a[t++];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) printf("%d%c", b[i][j], j == n - 1 ? '\n' : ' ');
	}
	return 0;
}

		for (int j = i; j < n - i && t < N; j++) b[i][j] = a[t++];
		for (int j = i + 1; j < m - 1 - i && t < N; j++) b[j][n - 1 - i] = a[t++];
		for (int j = n - 1 - i; j >= i && t < N; j--) b[m - 1 - i][j] = a[t++];
		for (int j = m - 2 - i; j >= i + 1&& t < N; j--) b[j][i] = a[t++];






