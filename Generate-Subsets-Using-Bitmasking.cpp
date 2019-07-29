// Program to Generate Subsets using Bitmasking

#include<bits/stdc++.h>
using namespace std;

void filterChars(string str, int no){

	int i=0;
	cout<<"{";	
	while(no){

		(no&1)?cout<<str[i]:cout<<"";
		i++;
		no=no>>1;
	}
	cout<<"}"<<endl;
}

void generateSubsets(string str, int len){

	int range=(1<<len)-1;
	for(int i=0;i<=range;i++){
		filterChars(str,i);
	}
}

int main(){

	string str="abcd";
	int len=str.length();
	generateSubsets(str,len);

	return 0;
}
