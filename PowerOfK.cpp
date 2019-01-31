// Program to Find Whether 'n' is any Power of 'k' or Not
// Short Trick

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,k;
	cin>>n>>k;

	if(log10(n)/log10(k)-int(log10(n)/log10(k))==0) cout<<"Yes";
	else cout<<"No";

	return 0;
}