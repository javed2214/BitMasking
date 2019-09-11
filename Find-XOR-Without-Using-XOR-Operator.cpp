// Program to Find XOR of Two Numbers Without Using XOR Operator
// https://www.techiedelight.com/find-xor-two-numbers-without-using-xor-operator/

#include<bits/stdc++.h>
using namespace std;

int XOR(int x, int y){

	return (x | y) - (x & y);
}

int main(){

	int x,y;
	cin>>x>>y;

	cout<<XOR(x,y);

	return 0;
}