// Counting Bits - LeetCode
// https://leetcode.com/problems/counting-bits/
// https://www.youtube.com/watch?v=awxaRgUB4Kw

// Time : O(n)
// Space : O(n)

class Solution {
public:
    vector<int> countBits(int num) {
        
        vector <int> v(num + 1);
        v[0] = 0;
        for(int i = 1; i <= num; i++){
            v[i] = v[i/2] + i % 2;
        }
        return v;
    }
};


class Solution {
public:
    vector<int> countBits(int num) {
        
        vector <int> v(num + 1);
        v[0] = 0;
        for(int i = 1; i <= num; i++){
            v[i] = v[i >> 1] + (i & 1);
        }
        return v;
    }
};