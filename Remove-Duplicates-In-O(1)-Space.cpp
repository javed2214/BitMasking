// Program to Remove Duplicates from String in O(1) Space 
// https://www.geeksforgeeks.org/remove-duplicates-from-a-string-in-o1-extra-space/

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str = "geeksforgeeks";
	int n = str.length();

	int x = 0, k = 0;

	for(int i=0;i<n;i++){
		
		int p = str[i] - 'a';

		if((x & (1 << p)) == 0){
			
			str[k++] = str[i];
			x = x | (1 << p);
		}
	}
	cout<<str.substr(0,k);
}