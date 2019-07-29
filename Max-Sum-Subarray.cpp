// Maximum Sum SubArray Using BitMasking (Non Contiguous Array)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int p,x=INT_MIN;

void getAns(int no, int *a){

    int i=0,sum=0;
    while(no){
        if(no&1)sum+=a[i];
        i++;
        no=no>>1;
    }
    x=sum;
    p=max(p,x);
    x=p;
}

void bitMask(int *a, int n){

    int range=(1<<n);
    for(int i=1;i<=range;i++){
        //if(__builtin_popcount(i)==2)
        getAns(i,a);
    }
}

int main(){

    int a[]={2,-1,2,3,4,-5};
    int n=sizeof(a)/sizeof(int);

    bitMask(a,n);

    cout<<p;

    return 0;
}
