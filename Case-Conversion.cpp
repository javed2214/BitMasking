// Case Conversion Using Bitwise Operator

#include<bits/stdc++.h>
using namespace std;
const int x=32;

string toLowerCase(string str){

	for(int i=0;i<str.length();i++)
		str[i]=str[i]|x;	// Add 32

	return str;
}

string toUpperCase(string str){

	for(int i=0;i<str.length();i++)
		str[i]=str[i]&~x;	// Subtract 32

	return str;
}

int main(){

	string str="JaVed AnSaRi";

	cout<<toUpperCase(str);
	cout<<"\n";
	cout<<toLowerCase(str);

	return 0;
}