// Program to Count Number of Set Bits

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

int main(){

	int x=7;
	
	cout<<countBits(x);

	return 0;
}