// ----- Author: Javed Ansari -----

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define s(a) sort(a.begin(),a.end());
#define ll long long int
#define SIZE 100000001

int main(){

	int test;
	cin>>test;
	int k=1;
	while(test--){
		int n;
		cin>>n;
		ll a[n],b[n];
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			b[i]=(x>>16);
			a[i]=x-(b[i]<<16);

		}
		cout<<"Case "<<k<<":\n";
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<"\n";
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<"\n";
		k++;
	}

	return 0;
}