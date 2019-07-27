#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    int n, tmp, tmpsum;
    std::vector<int> nums;
    std::vector<int>::iterator it;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
         scanf("%d", &tmp);
         tmpsum = 0;
         while (tmp != 0) {
             tmpsum += tmp % 10;
             tmp /= 10;
         }
         it = find(nums.begin(), nums.end(), tmpsum);
         if (it == nums.end()) nums.push_back(tmpsum);
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
         if (i == 0) std::cout << nums.size() << std::endl;
         if (i != nums.size() - 1) std::cout << nums[i] << " ";
         if (i == nums.size() - 1) std::cout << nums[i];
    }
    return 0;
}
