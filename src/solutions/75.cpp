#include <iostream>
#include <vector>
struct node{
    int data, next;
}list[100000];
std::vector<int> vec[3];
int main(){
    int sadr, n, k, tmpadr;
    std::cin >> sadr >> n >> k;
    for (int i = 0; i < n; i++) {
         std::cin >> tmpadr;
         std::cin >> list[tmpadr].data >> list[tmpadr].next; 
    }
    int p = sadr;
    while(p != -1) {
        int data = list[p].data;
        if (data < 0) vec[0].push_back(p);
        else if (data >= 0 && data <= k) vec[1].push_back(p);
        else vec[2].push_back(p);
        p = list[p].next;
    }
    int flag = 0;
    for (int i = 0; i < 3; i++) {
         for (int j = 0; j < vec[i].size(); j++) {
              if (flag == 0) {printf("%05d %d ", vec[i][j], list[vec[i][j]].data); flag = 1;}
              else printf("%05d\n%05d %d ", vec[i][j], vec[i][j], list[vec[i][j]].data);
         }
    }
    printf("-1");
    return 0;
}
