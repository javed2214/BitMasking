// Program to Check Whether the Number is Power of 2 or Not.

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n=1024;

	if((n&n-1)==0) cout<<"Yes";
	else cout<<"No";

	return 0;
}