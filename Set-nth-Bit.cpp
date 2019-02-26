// Program to Set nth Bit of a Number

#include<bits/stdc++.h>
using namespace std;

void setBit(int &x, int n){

	x=x|1<<n;
}

int main(){

	int x=8;	// Bin-1000
	int n=1;  	

	setBit(x,n);	// 1010 (Set First Bit)
	cout<<x;

	return 0;
}
