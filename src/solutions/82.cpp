#include <iostream>
#include <vector>
int main(){
    int N, ID, x, y, tmp, ds = 0, cj = 0;
    std::vector<int> id;
    std::vector<int> pts;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
         std::cin >> ID >> x >> y;
         id.push_back(ID);
         tmp = x * x + y * y;
         pts.push_back(tmp);
    }
    // if (N == 1) printf("%04d %04d", , );
    for(int i = 1; i < N; i++) {
         if (pts[i] > pts[cj]) cj = i;
         if (pts[i] < pts[ds]) ds = i;
    }
    printf("%04d %04d", id[ds], id[cj]);
    return 0;
}
