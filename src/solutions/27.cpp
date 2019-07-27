#include <iostream>
using namespace std;

int main(){
    int n; char s; int i = 1; int sum = 1; int row = 1;//row是行数; sum是总数; 
    cin >> n >> s;

    //处理行数
    while (sum < n){
        i += 2;
        sum += i * 2;
        row += 1;
    }

    if (sum > n) {sum -= (i * 2); i -= 2; row -= 1;}

    int temp = i;
    int temp2 = 3;
    //cout << i << " " << sum << " " << row << endl;

    /*如何优雅的打印沙漏呢?*/
    for (int j = 0; j < row; j++){
        for (int k = 0; k < j; k++) cout << " ";
        for (int l = 0; l < temp; l++) cout << s;
        temp -= 2;
        cout << endl;
    }

    for (int j = 1; j < row; j++){
        for (int k = 1; k < row - j; k++) cout << " ";
        for (int l = 0; l < temp2; l++) cout << s;
        temp2 += 2;
        cout << endl;
    }

    if (n - sum >= 0) cout << n - sum;
    return 0;
}
