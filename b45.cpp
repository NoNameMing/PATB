#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k = 0, max = 0, save[100005];
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
    	if (a[i] == b[i] && b[i] > max) save[k++] = b[i];
    	if (b[i] > max) max = b[i];
    }
    cout << k << endl;
    for (int i = 0; i < k; i++) {
    	if (i == k - 1) {cout << save[i]; break;} // save 写成了 b
    	cout << save[i] << " ";
    }
    return 0;
}

// #include <iostream>
// #include <algorithm>
// #include <vector>
// int v[100000];
// using namespace std;
// int main() {
//     int n, max = 0, cnt = 0;
//     scanf("%d", &n);
//     vector<int> a(n), b(n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//         b[i] = a[i];
//     }
//     sort(a.begin(), a.end());
//     for (int i = 0; i < n; i++) {
//         if(a[i] == b[i] && b[i] > max)
//             v[cnt++] = b[i];
//         if (b[i] > max)
//             max = b[i];
//     }
//     printf("%d\n", cnt);
//     for(int i = 0; i < cnt; i++) {
//         if (i != 0) printf(" ");
//         printf("%d", v[i]);
//     }
//     printf("\n");
//     return 0;
// }


// for (int l = i - 1; i >= 0; l--) // l 写成了 i
//         {
//         	if (a[l] > a[i]) flagleft = false; // 不需要 break	
//         }
//         for (int m = i + 1; i < n; m++)  // m 写成了 i
//         {
//         	if (a[m] < a[i]) flagright = false;	
//         }
//         if (flagleft && flagright) b[k++] = a[i];