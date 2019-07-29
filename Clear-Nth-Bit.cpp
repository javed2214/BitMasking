// Program to Clear nth Set Bit

#include<bits/stdc++.h>
using namespace std;

void clearBit(int &x, int n){

	x=x&(~(1<<n));
}

int main(){

	int x=7;
	int n=1;
	clearBit(x,n);

	cout<<x;

	return 0;
}
