// Generate All Subsets of an Array
// [1 2 3] -> [] [1] [2] [3] [1 2] [2 3] [1 3] [1 2 3]
// Using Bitmasking

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3};
	int n=sizeof(a)/sizeof(int);

	int range=1<<n;

	for(int i=0;i<range;i++){
		for(int j=0;j<n;j++){
			if(i&(1<<j)) cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}