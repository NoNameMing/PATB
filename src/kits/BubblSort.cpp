#include <iostream>
using namespace std;
void bubblesort(int A[], int n){
	 bool sorted = false;
	 while (sorted != true){
	 	sorted = true;
	 	for (int i = 0; i < n; i++) {
	 		 if(A[i + 1] > A[i]) {
			    swap(A[i + 1], A[i]);
	 		    sorted = false;
	 		}
	 	}
	 	n--;
	 }
}

int main(){
	int a[4]= {3, 4, 2, 5}; int n = 4;
	bubblesort(a, 4);
	for (auto k : a) cout << k << " ";
	return 0;
}

// -std=c++11