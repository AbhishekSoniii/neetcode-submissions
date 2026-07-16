class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string c : strs){
            string length = to_string(c.size());
            encoded_string += length + "#" + c;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string>decoded_strs;
        int i = 0;
        while(i<s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j-i));
            int start = j+1;
            string word = s.substr(start, length);
            decoded_strs.push_back(word);
            i = start + length;
        }return decoded_strs;
    }
};
