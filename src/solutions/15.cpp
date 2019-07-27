// #include <iostream>
// #include <map>
// using namespcae std;

// int main(){
//     int num, d, c, N, L, H, M = 0;//学号n 德分d 才分c 人数N 分数线L 优先录取分数H 满足条件的人数M
//     struct node {
//     int num, de, cai;
// };
// int cmp(struct node a, struct node b) {
//     if ((a.de + a.cai) != (b.de + b.cai))
//         return (a.de + a.cai) > (b.de + b.cai);
//     else if (a.de != b.de)
//         return a.de > b.de;
//     else
//         return a.num < b.num;
// }

//     /*
//         1.d < L && c < L;

//         2.d + c 总分排序;

//         3.1 firstLevel:  d >= H && c >= H;//
//         3.2 secondLevel: d >= H && c < H; //德胜才
//         3.3 thirdLevel: d < H && c < H && d>c //德才皆亡但德胜才
//         3.4 forthLevel: L < d < H && L < c < H 

//         4.1 if ()
//     */

//     // cout << M <<endl;//满足个数

//     // for (int i = 0;i < M;i++){
//     //      cout << /* 成绩 */<<endl;
//     // }
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct node {
    int num, de, cai;
};
int cmp(struct node a, struct node b) {
    if ((a.de + a.cai) != (b.de + b.cai))
        return (a.de + a.cai) > (b.de + b.cai);
    else if (a.de != b.de)
        return a.de > b.de;
    else
        return a.num < b.num;
}
int main() {
    int n, low, high;
    scanf("%d %d %d", &n, &low, &high);
    vector<node> v[4];
    node temp;
    int total = n;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &temp.num, &temp.de, &temp.cai);
        if (temp.de < low || temp.cai < low)
            total--;
        else if (temp.de >= high && temp.cai >= high)
            v[0].push_back(temp);
        else if (temp.de >= high && temp.cai < high)
            v[1].push_back(temp);
        else if (temp.de < high && temp.cai < high && temp.de >= temp.cai)
            v[2].push_back(temp);
        else
            v[3].push_back(temp);
    }
    printf("%d\n", total);
    for (int i = 0; i < 4; i++) {
        sort(v[i].begin(), v[i].end(), cmp);
        for (int j = 0; j < v[i].size(); j++)
            printf("%d %d %d\n", v[i][j].num, v[i][j].de, v[i][j].cai);
    }
    return 0;
}
