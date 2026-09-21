class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        set<int> set1;
        for(int i : nums){
            set1.insert(i);
        }
        vector<int> ordered;
        for (int i : set1){
            ordered.push_back(i);
        }
        // for(int i:ordered){
        //     cout<<i<<endl;
        // }
        // return 0;
        int max1=1;
        int max2=1;
        for(int i=0;i<ordered.size()-1;i++){
            if(ordered[i]+1==ordered[i+1]){
                max2++;
            }
            else{
                
                max2=1;
            }
            max1=max1>max2?max1:max2;
        }

        return max1;
    }
};
