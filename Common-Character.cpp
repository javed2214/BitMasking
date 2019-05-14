// Program to Find Whether there is a Common Character Present in 'n' Strings or Not
// Using Bitmasking

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	vector<string> v={"coding", "is", "life"};
	vector<int> Mask(v.size(),0);
 
	for(int i=0;i<v.size();i++){
		for(auto it:v[i]) Mask[i]|=1<<(it-'a');
	}
	int c=0,p=111111111;
	for(int i=0;i<Mask.size();i++){
		p=Mask[i] & p;
		if(p) c++;
	}
	if(c==Mask.size()) cout<<"Yes\n";
	else cout<<"No\n";

	// 'i' is Common
 
	return 0;
}