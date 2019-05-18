// Remove Duplicates from String in O(1) Space
// Using BitMasking

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	cin>>str;

	int p=0;

	for(int i=0;i<str.length();i++){
		if(!(p & (1<<(str[i]-'a')))){
			cout<<str[i];
			p = p | (1<<str[i]-'a');
		}
	}
	return 0;
}