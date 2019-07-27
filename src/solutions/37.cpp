#include <iostream>
using namespace std;
// 30mis around; 少考虑了一种情况
int main(){
    int p1, p2, p3, a1, a2, a3, x = 0, y = 0, z = 0;
    scanf("%d.%d.%d %d.%d.%d", &p1, &p2, &p3, &a1, &a2, &a3); // 处理符号和数字一起输入的问题
    if (p1 > a1 || ((p1 == a1) && p2 > a2) || ((p1 == a1) && (p2 == a2) && (p3 > a3))) {
    	printf("-");
    }
    
    if (p1 > a1) {
    	x = p1 - a1;
    	if (p2 > a2) {
    		y = p2 - a2;
    	}
    	if (p2 < a2) {
    		y = p2 + 17 - a2;
    		if (x != 0) x -= 1;
    	}
    	if (p3 > a3) {
    		z = p3 - a3;
    	}
    	if (p3 < a3) {
    		z = p3 + 29 - a3;
    		if (y != 0) y -= 1; else x -= 1, y += 16; // 未考虑到的情况
    	}
    }
    else {
    	x = a1 - p1;
    	if (p2 < a2) {
    		y = a2 - p2;
    	}
    	if (p2 > a2) {
    		y = a2 + 17 - p2;
    		if (x != 0) x -= 1;
    	}
    	if (p3 < a3) {
    		z = a3 - p3;
    	}
    	if (p3 > a3) {
    		z = a3 + 29 - p3;
    		if (y != 0) y -= 1; else x -= 1, y += 16;
    	}
    }
    printf("%d.%d.%d", x, y, z);
    return 0;
}
