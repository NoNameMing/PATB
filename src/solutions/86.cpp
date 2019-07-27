#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a, b;
    std::cin >> a >> b;
    string s = to_string(a * b);
    reverse(s.begin(), s.end());
    printf("%d", stoi(s));
    return 0;
}
