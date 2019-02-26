// Case Toggling Using Bitwise Operator

#include<bits/stdc++.h>
using namespace std;

string toggleCase(string str){

	for(int i=0;i<str.length();i++)
		str[i]=str[i]^32;

	return str;
}

int main(){

	string str="JavEd AnSaRi";
	cout<<toggleCase(str);

	return 0;
}