// Add 1 to a Given Number Without using +/++/*/-/--
// To add 1 to a number x (say 0011000111), flip all the bits after the rightmost 0 bit (we get 0011000000).
// Finally, flip the rightmost 0 bit also (we get 0011001000) to get the answer.
// https://www.geeksforgeeks.org/add-1-to-a-given-number/

#include<bits/stdc++.h>
using namespace std;

/*
int addOne(int n){
	return (-(~n));
}
*/

int addOne(int x){

	int m=1;
	while(x&m){
		x=x^m;
		m<<=1;
	}
	x=x^m;	// Flipping Rightmost 0'th Bit
	return x;
}

int main(){

	int x=234;
	cout<<addOne(x);

	return 0;
}