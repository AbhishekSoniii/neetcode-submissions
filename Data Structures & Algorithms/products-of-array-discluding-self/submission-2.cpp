class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result(nums.size());
        int prod = 1;
        int j = 0;
        for(int x : nums){
            if(x==0){
                j++;
                if(j == 2){
                    result.assign(nums.size(), 0);
                    return result;
                }
                continue;
            }
            prod *= x;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                result.assign(nums.size(),0);
                result[i] = prod;
                return result;
            }
            result[i] = prod/nums[i];
            
        }return result;
    }
};
