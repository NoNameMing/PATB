#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main(){
	int n, k = 0;
	double cnt = 0, y = 0, temp;
	char a[50], b[50];
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		 scanf("%s", a);
		 sscanf(a, "%lf", temp);
		 sprintf(b, "%.2f", temp);
		 int flag = 0;
		 for (int j = 0; j < strlen(a); j++)
		 	  if (a[j] != b[j]) flag = 1;
		 if ((temp >= -1000) && (temp <= 1000) && flag == 0) {
		 	 cnt += temp;
		 	 k++;
		 }
		 else{
		 	 std::cout << "ERROR: " << temp << " is not a legal number" << endl;
		 }
	}
	y = cnt / k;
	if (k == 0) std::cout << "The average of 0 numbers is Undefined";
	if (k == 1) printf("%s %.2f", "The average of 1 number is", y);
	if (k > 1) printf("%s %d %s %.2f", "The average of", k, "numbers is", y); // .2f y
	return 0;
}
