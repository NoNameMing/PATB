#include <iostream>
int main(){
    int M, N, A, B, t, tmp, cnt = 0;
    std::cin >> M >> N >> A >> B >> t;
    while(std::cin >> tmp){
    if (tmp >= A && tmp <= B) printf("%03d ", t);
    else printf("03%d", tmp);
    cnt++;
    if (cnt == N) {std::cout << std::endl; cnt = 0;}
    }
    return 0;
}