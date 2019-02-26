// Program to Check if Binary Representation of a Number is Palindrome or Not

#include<bits/stdc++.h>
using namespace std;

int checkPali(int n){

	int z=0,o=0;
	while(n){
		if(n&1) o++;
		else z++;
		n>>=1;
	}
	if(z==o) return 1;
	return 0;
}

int main(){

	int n=10;	// 1010
	if(checkPali(n)) cout<<"Yes!";
	else cout<<"No!";

	return 0;
}