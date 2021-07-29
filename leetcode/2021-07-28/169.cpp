// 169. 多数元素
 #include<bits/stdc++.h>
 using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

int main(){
    vector<int> nums = {3, 2, 3};
    Solution s;
    cout << s.majorityElement(nums) << endl;
    return 0;
}