class Solution{
public:
      vector<vector<string>> groupAnagrams(vector<string> strs){
        unordered_map<string, vector<string>> table;
        vector<vector<string>> result;
        for(string s : strs){
            string s1 = s;
            sort(s1.begin(), s1.end());
            table[s1].push_back(s);
        }
        for(auto& pair : table){
            result.push_back(pair.second);
        }
        return result;
      }
};
