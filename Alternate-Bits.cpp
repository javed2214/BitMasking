// Program to Check whether the Binary of Number has Alternating Bits or Not
//  5 => 101 (True)
// 11 => 1011 (False)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int temp=(n&1);
	n>>=1;
	while(n){
		if(temp==(n&1)){
			cout<<"No";
			return 0;
		}
		temp=!temp;
		n>>=1;
	}
	cout<<"Yes";

	return 0;
}
