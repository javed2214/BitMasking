// Program to Check if Binary Representation is Palindrome or Not
// https://www.techiedelight.com/bit-hacks-part-6-random-problems/
// One Liner Trick
// The idea is to Construct Reverse Binary Representation of 'n' and return True if it same as 'n'.

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){

	unsigned rev = 0;
	unsigned k = n;

	while(k){

		rev = (rev << 1) | (k & 1);
		k = k >> 1;
	}

	return (rev == n);
}

int main(){

	int n;
	cin>>n;

	if(isPalindrome(n)) cout<<"Palindrome!";
	else cout<<"Not Palindrome!";

	return 0;
}