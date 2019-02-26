// Permute A String by Changing Case
// ab => ab,aB,Ab,AB

#include<bits/stdc++.h>
using namespace std;

void getBit(string str, int no){

	int i=0;
	while(no){
		if(no&1) str[i]=toupper(str[i]);
		i++;
		no>>=1;
	}
	cout<<str<<" ";
	return;
}

void getMask(string str){

	int range=1<<str.length();
	transform(str.begin(),str.end(),str.begin(),::tolower);

	for(int i=0;i<=range-1;i++)
		getBit(str,i);
	return;
}

int main(){

	string str="abc";
	getMask(str);

	return 0;
}
