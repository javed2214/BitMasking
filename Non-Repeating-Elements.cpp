// Given an Array in which All the Elements occur for Two Times and Two Elements occur only Once
// Find Those Two Elements

#include<bits/stdc++.h>
using namespace std;

// You can find any Set Bit

int getKthSetBit(int n){

	int i=0;

	while(n){
		if(n & 1 == 1) return i;
		i++;
		n >>= 1;
	}
}

int main(){

	int a[]={2,1,3,5,7,3,1,2};
	int n = sizeof(a)/sizeof(int);

	int temp=0;

	for(int i=0;i<n;i++) temp ^= a[i];

	int x = getKthSetBit(temp);

	int p=0,q=0;

	for(int i=0;i<n;i++){
		if((1 << x) & a[i]) p ^= a[i];
		else q ^= a[i];
	}

	cout<<p<<" "<<q;

	return 0;
}