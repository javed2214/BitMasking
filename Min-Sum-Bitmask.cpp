// Minimum Sum (CodeChef)
// https://www.codechef.com/problems/MINARRS
// https://discuss.codechef.com/t/minarrs-editorial/24756
// Sexy Problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	ll test;s
	cin>>test;

	while(test--){

		ll n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		ll xx=1,set,unset,sum=0;
		for(int i=0;i<32;i++){
			set=0;
			unset=0;
			for(int j=0;j<n;j++){
				if(a[j]&(1<<i)) set++;
				else unset++;
			}
			sum+=min(xx*set, xx*unset);
			xx*=2;
		}
		cout<<sum<<"\n";
	}

	return 0;
}