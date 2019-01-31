// Program to Check whether the Given Number is Power of Four or Not

#include<bits/stdc++.h>
using namespace std;

bool powerOfFour(int n){

	int i=1;
	while(i!=0 and i<=n){
		if(i==n) return true;
		i<<=2;
	}
	return false;
}

int main(){

	int n;
	cin>>n;
	if(powerOfFour(n)) cout<<"True";
	else cout<<"False";

	return 0;
}