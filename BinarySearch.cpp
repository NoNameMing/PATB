#include <iostream>
using namespace std;

int binarySearch(int A[], int left, int right, int x) {
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if(A[mid] == x) return mid;
		else if(A[mid] > x) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return -1;
}

int binarySearchDownOrder(int A[], int left, int right, int x) {
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if(A[mid] == x) return mid;
		else if(A[mid] < x) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return -1;
}

int main() {
	static const int n = 10;
	int A[n] = {1, 3, 4, 6, 7, 8, 10, 11, 12, 15};
	printf("%d %d\n", binarySearch(A, 0, n - 1, 6), binarySearch(A, 0, n - 1, 9));
	int B[n] = {15, 12, 11, 10, 8, 7, 6, 4, 3, 1};
	printf("%d %d\n", binarySearchDownOrder(B, 0, n - 1, 6), binarySearch(B, 0, n - 1, 9));
	return 0; 
}