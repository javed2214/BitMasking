// Program to Count Set Bits from 1 to n
// Optimized Algorithm
// Brian Kernighan’s Algorithm

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int p){

	int co = 0;

	while(p){

		p = p & (p - 1);
		co++;
	}

	return co;
}

int main(){

	int n;
	cin>>n;

	int s = 0;

	for(int i=1;i<=n;i++){

		s += countSetBits(i);
	}

	cout<<s;

	return 0;
}
