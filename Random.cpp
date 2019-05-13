// Generate All Subsets of Size 'k'
// [1 2 3 4] k=3 -> [1 2 3] [2 3 4] [1 2 4] [1 3 4]
// Using Bitmasking

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);

	int range=1<<n;
	int flag=0,k=4;

	for(int i=0;i<range;i++){
		for(int j=0;j<n;j++){
			if(__builtin_popcount(i)==k and i&(1<<j)){
				cout<<a[j]<<" ";
				flag=1;
			}
		}
		if(flag) cout<<endl;
		flag=0;
	}
	return 0;
}