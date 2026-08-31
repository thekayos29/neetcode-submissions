#include<unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set <int> unique(nums.begin(),nums.end());
        if (unique.size()==nums.size()){
            return false;
        }
        else{
            return true;
        }
        
    }
};