// #include <iostream>
// int main(){
//     int n, tno, c, temp, j = 0, cnt[1001] = {0};
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++){
//     	 scanf("%d-%d %d", &tno, &c, &temp);
//     	 cnt[tno] += temp; 
//     }
//     for (int i = 1; i < 1001; i++)
//     {
//     	 if (cnt[i] > cnt[j]) j = i;
//     }
//     std::cout << j << " " << cnt[j];
//     return 0;
// }


#include <iostream>
int main(){
    int n, tno[1001] = {0}, cnt[1001] = {0}, c, temp = 0, j = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
    	 scanf("%d-%d %d", &tno[i], &c, &temp);
    	 cnt[tno[i]] += temp;
    }
    for (int i = 1; i <= 10000; i++)
    {
    	 if (cnt[tno[i]] > cnt[tno[j]]) j = i;
    }
    std::cout << tno[j] << " " << cnt[tno[j]];
    return 0;
}
