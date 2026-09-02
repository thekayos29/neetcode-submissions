class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapFreq;
        for(int it:nums){
            mapFreq[it]++;
        }
        vector<vector<int>> baatli(nums.size()+1) ;
        for(auto [key,value]:mapFreq){
            baatli[value].push_back(key);
        }
        vector<int> output;
        for (int i = baatli.size() - 1; i >= 0 && output.size() < k; i--){
            for(int num:baatli[i]){
                output.push_back(num);
                if(output.size()==k)break;
            }

        }
        return output;
        }
        
    };
