#include <iostream>
using namespace std;

int main() {
    int max = -1,min = 101,n,grade;
    string maxstuName,maxstuNum,minstuName,minstuNum,stuInputName,stuInputNum;//学生姓名 与 学生学号
    cin >> n;//n 为输入值 即个数 还有分数
    for (int i = 0; i < n; i++) {
         cin >> stuInputName >> stuInputNum >> grade;
         //此处就是要做比较 max 与 输入值grade;
         //还要保存同时输入的 stuName 和 stuNum 做输出
         //我觉得保存下来不如不保存；可以都写下来对比一下
         //此处是 替代法
         if (grade > max){
             maxstuName = stuInputName;
             maxstuNum = stuInputNum;
             max = grade;
         }
         if (grade < min){
             minstuName = stuInputName;
             minstuNum = stuInputNum;
             min = grade;
         }
    }
    cout << maxstuName << " "<<maxstuNum<<endl;
    cout << minstuName << " "<<minstuNum<<endl;
  return 0;
}

