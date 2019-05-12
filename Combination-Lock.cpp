// Combination Lock Problem (Codeforces)
// Bitmasking
// https://codeforces.com/contest/1097/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int range=(1<<n);
	for(int i=0;i<range;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(i&(1<<j)) sum+=a[j];
			else sum-=a[j];
		}
		if(sum%360==0){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}