// https://leetcode.com/problems/combination-sum-iii/

class Solution {
public:
    
    void bitMask(vector<int>&v, int no, int p, vector<vector<int>>&res, int k){
        
        int i=0,sum=0;
        vector<int>x;
        while(no){
            if(no&1){
                x.push_back(v[i]);
                sum+=v[i];
            }
            i++;
            no>>=1;
        }
        if(x.size()==k and sum==p)
            res.push_back(x);
    }
    
    void getMask(vector<int>&v, int k, int sum, vector<vector<int>>&res){
        
        int range=(1<<9);
        for(int i=0;i<range;i++){
            if(__builtin_popcount(i)==k)
                bitMask(v,i,sum,res,k);
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int sum) {
        
        vector<int> v;
        vector<vector<int>>res;
        for(int i=1;i<=9;i++)
            v.push_back(i);
        getMask(v,k,sum,res);
        
        return res;
    }
};