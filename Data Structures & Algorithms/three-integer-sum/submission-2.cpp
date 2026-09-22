class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> output;
        for(int i=0;i<n-2;i++){
            int l;
            int r;
            l=i+1;
            r=n-1;
            int reqSum = -nums[i];
            while(l<r){
                int sum = nums[l]+nums[r];
                if(sum==reqSum){
                    output.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(sum>reqSum){
                    r--;
                }
                else{
                    l++;
                }
                

            }
        }
        vector<vector<int>> output1(output.begin(),output.end());
        return output1;
        
    }
};
