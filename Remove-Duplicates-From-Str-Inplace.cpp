// Remove Duplicates from String in O(1) Space
// https://www.geeksforgeeks.org/remove-duplicates-from-a-string-in-o1-extra-space/

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="geeksforgeeks";
	int n=str.length();

	int counter=0,p=0;

	for(int i=0;i<n;i++){

		int x=str[i]-'a';
		if((counter & (1 << x)) == 0){
			str[p++]=str[i];
			counter = counter | (1 << x);
		}
	}
	cout<<str.substr(0,p);

	return 0;
}