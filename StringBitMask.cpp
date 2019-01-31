// https://leetcode.com/problems/maximum-product-of-word-lengths/
/*

Given a string array words, find the maximum value of length(word[i]) * length(word[j])
where the two words do not share common letters.
You may assume that each word will contain only lower case letters.
If no such two words exist, return 0.

Example 1:

Input: ["abcw","baz","foo","bar","xtfn","abcdef"]
Output: 16 
Explanation: The two words can be "abcw", "xtfn".

*/
class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int res=0;
        vector<int>mask(words.size(),0);
        for(int i=0;i<words.size();i++){
            for(auto it:words[i])
                mask[i]|=1<<(it-'a');
            for(int j=0;j<i;j++){
                if(!(mask[i]&mask[j]))
                    res=max(res,(int)words[i].size()*(int)words[j].size());
            }
        }
        return res;
    }
};