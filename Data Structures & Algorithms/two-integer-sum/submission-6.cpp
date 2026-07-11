class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        dict[nums[0]] = 0;
        for(int i = 1; i<nums.size(); i++){
            if(dict.count(target - nums[i])){
                return {dict[target-nums[i]], i};
            }
            dict[nums[i]] = i;
        }return {};
    }
};
