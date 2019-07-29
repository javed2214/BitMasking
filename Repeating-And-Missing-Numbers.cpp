// https://www.interviewbit.com/problems/repeat-and-missing-number-array/


int getBit(int n){
    
    int i=0;
    while(n){
        if(n&1) return i;
        i++;
        n >>= 1;
    }
}

vector<int> Solution::repeatedNumber(const vector<int> &a) {
        
    int n = a.size();
    int temp = 0;
    
    for(int i=0;i<n;i++) temp ^= a[i];
    for(int i=1;i<=n;i++) temp ^= i;
    
    int x = getBit(temp);
    int p=0, q=0;
    
    for(int i=0;i<n;i++){
        if((1<<x) & a[i]) p ^= a[i];
        else q ^= a[i];
    }
    for(int i=1;i<=n;i++){
        if((1<<x) & i) p ^= i;
        else q ^= i;
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        if(p == a[i]){
            v.push_back(a[i]);
            break;
        }
    }
    if(v.size()) v.push_back(q);
    else return {q,p};
    
    return v;
}
