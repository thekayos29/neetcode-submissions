class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>group;
        for(const string&s:strs){
            map <char,int> charMap;
            for(auto& c:s){
                charMap[c]++;
            }
            group[charMap].push_back(s);
        }
        vector<vector<string>> output;
        output.reserve(group.size());
        for(auto &x:group){
            output.push_back(move(x.second));
        }
        return output;
    }

};
