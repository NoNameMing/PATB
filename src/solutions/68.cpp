#include <iostream>
#include <vector>
int m, n, tol;
std::vector<std::vector<int>> v;
int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};

bool judge(int i, int j){
    for (int k = 0; k < 8; k++) {
          int tx = i + dir[k][0];
          int ty = j + dir[k][1];
        //   if (tx >= 0 && tx < n && ty >= 0 && )
    }
    return true;
}

int main(){
    return 0;
}
