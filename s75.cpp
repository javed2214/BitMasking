// https://leetcode.com/problems/subsets/

class Solution {
public:
    
    vector<vector<int>> subsets(vector<int>&nums) {
        
        int range=(int)(1<<nums.size());
        vector <vector<int> > X;
        int mask=0;
        
        for(int i=0;i<range;i++){
            vector <int> v;
            for(int j=0;j<nums.size();j++){
                mask=(1<<j);
                if(mask&i)
                    v.push_back(nums[j]);
            }
            X.push_back(v);
        }
        return X;
    }
};