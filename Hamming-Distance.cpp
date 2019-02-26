// Program to Calculate Hamming Distance Between Two Integers
// Hamming Distance b/w Two Integers is the Number of Bits which are Different at Same Position in Both Numbers

#include<bits/stdc++.h>
using namespace std;

int hammingDis(int n1, int n2){

	int x=n1^n2;
	int count=0;

	while(x){
		if(x&1) count++;
		x>>=1;
	}
	return count;
	// count = __builtin_popcount(x)
}

int main(){

	int n1,n2;
	cin>>n1>>n2;

	cout<<hammingDis(n1,n2);

	return 0;
}