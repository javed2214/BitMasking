// https://www.codechef.com/problems/BESTBATS

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	int test;
	cin>>test;
	while(test--){

		int a[11],k;
		for(int i=0;i<11;i++)
			cin>>a[i];
		cin>>k;
		int sum=0,count=0;
		int x=INT_MIN;
		int range=(1<<11);
		int i;
		for(int i=0;i<range;i++){
			sum=0;
			if(__builtin_popcount(i)==k){
				for(int j=0;j<11;j++){
					int mask=(1<<j);
					if(mask&i){
						sum+=a[j];
					}
				}
				if(sum>x){
					x=sum;
					count=1;
				}
				else if(sum==x) count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}