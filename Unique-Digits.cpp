// Program to Print Strictly Smaller Number Such that All Its Digits are Unique

#include<bits/stdc++.h>
using namespace std;

int getAns(int n){

	string str=to_string(n);
	unordered_map<char,int> Map;

	for(auto it:str){
		Map[it]++;
	}
	if(Map.size()==str.length()) return n;
	return 0;
}

int main(){

	int n;
	cin>>n;

	while(n--){
		int p=getAns(n);
		if(p){
			cout<<p;
			return 0;
		}
	}
	return 0;
}