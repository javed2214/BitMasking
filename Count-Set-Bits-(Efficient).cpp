// Program to Count Set Bits Fast (Efficient Method)

#include<bits/stdc++.h>
using namespace std;

int countBits(int n){

	int count=0;		// TC :- O(No of Set Bits)
	while(n){
		count++;
		n=n&(n-1);
	}
	return count;
}

int main(){

	int n=13;

	cout<<countBits(n);

	return 0;
}
