// Program to Convert Decimal Number Into Binary Form using Recursion

#include<bits/stdc++.h>
using namespace std;

void getBin(int n){

	if(n>1) getBin(n/2);
	cout<<n%2;
}

int main(){

	int n=10;
	getBin(n);

	return 0;
}