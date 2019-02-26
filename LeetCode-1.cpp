// https://leetcode.com/problems/subsets/

#include<bits/stdc++.h>
using namespace std;
    
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
int main(){

    std::vector<int> v={1,2,3};
    std::vector<vector<int> > X;
    X=subsets(v);

    for(int i=0;i<X.size();i++){
        cout<<"[";
        for(int j=0;j<X[i].size();j++)
            cout<<X[i][j]<<"";
        cout<<"]\n";
    }
    return 0;
}
