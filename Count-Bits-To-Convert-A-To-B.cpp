// Count Number of Bits to be Flipped to convert A to B

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a=10,b=20;
	// a=01010
	// b=10100
	int x=(a^b);
	cout<<__builtin_popcount(x);

	return 0;
}

// Required Bits to Flip = 4