#include <iostream>
int main(){
    int n, m, tmp, tmpNum, cntStu = 0, cntItem = 0;
    std::string name;
    bool ban[10000] = {false};
    scanf("%d %d", &n, &m);
for (int i = 0; i < m; i++) {
        scanf("%d", &tmpNum);
        ban[tmpNum] = true;
    }
    for (int i = 0; i < n; i++) {
         bool tmpCnt = 0;
         std::cin >> name >> tmp;
         for (int j = 0; j < tmp; j++) {
              int carryNum;
              scanf("%d", &carryNum);
              if (ban[carryNum] == true && tmpCnt != 0) {cntItem++; printf(" %04d", carryNum);}
              if (ban[carryNum] == true && tmpCnt == 0) {tmpCnt = 1; cntStu++; cntItem++; std::cout << name << ":"; printf(" %04d", carryNum);}
              if (j == tmp - 1 && tmpCnt != 0) {std::cout << "\n";}
         }
    }
    std::cout << cntStu << " " << cntItem;
    return 0;
}
