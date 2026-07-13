class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> dict;
        vector<int> result;
        vector<vector<int>> buckets(nums.size()+1);
        for(int x : nums){
            dict[x]++;
        } 
        for(auto& pair : dict){
            int number = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(number);
        }
        for(int i = buckets.size()-1; i>=0; i--){
            for(int num : buckets[i]){
                result.push_back(num);
                if(result.size() == k){
                    return result;
                }
            }
        }return result;
        
    }
};
