// Program to Count of Set Bits of a Given Number
// Brian Kernighan’s Algorithm
// Optimized Algorithm
// TC: O(No of Set Bits)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n = 9;
	int c = 0;

	while(n){

		n = n & (n-1);
		c++;
	}

	cout<<c;

	return 0;
}
