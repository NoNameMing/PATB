#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M, a, b, cnt = 0, tmp;
    scanf("%d", &N);
    vector<int> couple(100000, -1);
 
    for (int i = 0; i < N; i++) {
         scanf("%d %d", &a, &b);
         couple[a] = b;
         couple[b] = a;
    }

    scanf("%d", &M);
    vector<int> guest(M), isExist(100000); // record guest
    vector<int> show; // show guest

    for (int i = 0; i < M; i++) {
         scanf("%d", &guest[i]);
         if (couple[guest[i]] != -1) isExist[guest[i]] = 1;
    }

    for (int i = 0; i < M; i++) {
         if (couple[guest[i]] == -1) show.push_back(guest[i]);
         if (couple[guest[i]] != -1 && isExist[couple[guest[i]]] != 1) show.push_back(guest[i]);
    }

    for (int i = 0; i < show.size(); i++) {
         if (i == 0) std::cout << show.size() << std::endl;
         if (i != show.size() - 1) printf("%05d ", show[i]);
         if (i == show.size() - 1) printf("%05d", show[i]);
    }
    return 0;
}
