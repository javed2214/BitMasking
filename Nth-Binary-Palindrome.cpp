// Program to Find nth Number whose Binary Representation is Palindrome

#include<bits/stdc++.h>
using namespace std;

int findKthBit(int n, int k){

	if(n&(1<<(k-1))) return 1;
	return 0;
}

int leftMostBit(int n){

	int count=0;
	while(n){
		count++;
		n>>=1;
	}
	return count;
}

int isPalindrome(int n){

	int l=leftMostBit(n);
	int r=1;
	while(l>r){
		if(findKthBit(n,l)!=findKthBit(n,r))
			return 0;
		l--;
		r++;
	}
	return 1;
}

int main(){

	int n,c=0,i;
	cin>>n;
	for(i=1;i<INT_MAX;i++){
		if(isPalindrome(i)) c++;
		if(c==n) break;
	}
	cout<<i;

	return 0;
}