// 136. 只出现一次的数字
 #include<bits/stdc++.h>
 using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for (int num : nums){
            single ^= num;
        }
        return single;
    }
};

int main(){
    vector<int> nums = {4,1,2,1,2};
    Solution s;
    cout << s.singleNumber(nums) << endl;
    return 0;
}