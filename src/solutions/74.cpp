#include <iostream>
int main(){
    std::string s, sa, sb, ans;
    int carry = 0, flag = 0; // carry 标记进位
    std::cin >> s >> sa >> sb;
    ans = s;
    std::string ssa(s.length() - sa.length(), '0');
    sa = ssa + sa;
    std::string ssb(s.length() - sb.length(), '0');
    sb = ssb + sb;
    for (int i = s.length() - 1; i >= 0; i--) {
         int mod = s[i] == '0' ? 10 : (s[i] - '0'); // mod 是进制位
         ans[i] = (sa[i] - '0' + sb[i] - '0' + carry) % mod + '0';
         carry = (sa[i] - '0' + sb[i] - '0' + carry) / mod;
    }
    if (carry != 0) ans = '1' + ans;
    for (int i = 0; i < ans.length(); i++) {
         if (ans[i] != '0' || flag == 1) {
             flag = 1;
             std::cout << ans[i];
         }
    }
    if (flag == 0) std::cout << 0;
    return 0;
}
