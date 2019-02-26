// Program to Count Clear Bits (0'th Bit) of any Number
// Brute Force

#include<bits/stdc++.h>
using namespace std;

int countClearBits(int n){

	int i=1,c=0;
	while(n){
		if(!(n&i)) c++;
		n>>=1;
	}
	return c;
}

int main(){

	int n=8;
	cout<<countClearBits(n);

	return 0;
}

// 1010