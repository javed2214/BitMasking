// Minimum No of Bits that Need to Convert 'a' into 'b'

#include<bits/stdc++.h>
using namespace std;

int countBits(int x){

	int count=0;
	while(x){
		count+=x&1;
		x>>=1;
	}
	return count;
}

int minBits(int a, int b){

	int x=a^b;

	return countBits(x);
}

int main(){

	int a=8,b=7;			// a=1000 and b=0111

	cout<<minBits(a,b);		// Required Bits :- 4

	return 0;
}