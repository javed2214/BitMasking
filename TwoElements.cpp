// Given an array of numbers nums, in which exactly two elements appear 
// only once and all the other elements appear exactly twice. Find the two elements that appear only once.
// [1,2,1,3,2,5] ==>> [3,5]
// BitMasking

#include<bits/stdc++.h>
using namespace std;

vector<int> twoElements(vector<int> v){

	int p=0;
	for(int i=0;i<v.size();i++)
		p^=v[i];
	int temp=p,i=0;
	while(temp){
		if(temp&1)
			break;
		i++;
		temp>>=1;
	}
	int mask=(1<<i);
	int first=0;
	for(int i=0;i<v.size();i++){
		if(mask&v[i])
			first^=v[i];
	}
	int sec=first^p;

	return {first,sec};
}

int main(){

	vector<int> v={1,2,1,3,2,5};
	vector<int> res=twoElements(v);
	for(auto it:res)
		cout<<it<<" ";

	return 0;
}