// Largest Set With Bitwise OR Equal to N
// Given an integer n, find the largest possible set of non negative integers with bitwise OR equal to n.
// https://www.geeksforgeeks.org/largest-set-bitwise-equal-n/

// The answer lies in the following Concept.
// For any number, x greater than n, the bitwise OR of x and n will never be equal to n.

#include<bits/stdc++.h>
using namespace std;

void bitwiseORSet(int n){

	vector <int> v;

	for(int i=0;i<=n;i++)
		if((i | n) == n) v.push_back(i);

	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

	return;
}

int main(){

	int n;
	cin>>n;

	bitwiseORSet(n);

	return 0;
}