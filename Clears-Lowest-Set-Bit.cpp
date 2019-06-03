// Clears Least Significant Bit
// 5->101 => 4->100
// 24->11000 => 16->10000

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n=24;
	n=n&(n-1);
	cout<<n;

	return 0;
}