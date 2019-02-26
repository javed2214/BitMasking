// Program to Toggle All Even Bits

// Input  : 20
// Output : 30
// Binary Representation : 1 0 1 0 0
// After Toggle          : 1 1 1 1 0

#include<bits/stdc++.h>
using namespace std;

void toggleBit(int &n, int k){
	n=(n^(1<<(k-1)));
}

int toggleEvenBits(int n){

	int count=1,c=n;
	while(c){
		if(count%2==0)
			toggleBit(n,count);
		count++;
		c>>=1;
	}
	return n;
}

int main(){

	int n;
	cin>>n;

	cout<<toggleEvenBits(n);

	return 0;
}