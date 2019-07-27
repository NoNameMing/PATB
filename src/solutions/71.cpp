#include <iostream>
int main(){
    int T, K, b, t, x, n1 ,n2;
    std::cin >> T >> K;
    x = T;
    for (int i = 0; i < K; i++) {
        std::cin >> n1 >> b >> t >> n2;
        if (t > x) printf("%s %d%s","Not enough tokens.  Total =", x, ".\n");
        else {
            if ((n2 > n1 && b == 1) || (n2 < n1 && b == 0)) {x += t; printf("%s%d%s%d%s", "Win ", t, "!  Total = ", x, ".\n");}
            if ((n2 < n1 && b == 1) || (n2 > n1 && b == 0)) {x -= t; printf("%s%d%s%d%s", "Lose ", t, ".  Total = ", x, ".\n");}
            if (x <= 0) {printf("%s", "Game Over."); break;}
        }
    }
    return 0;
}
