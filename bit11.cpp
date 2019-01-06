// Program to Generate Array Subsets Using BitMasking

#include<bits/stdc++.h>
using namespace std;

void getResults(int *a, int no, int n){

	int i=0;
	while(no){

		if(no&1) cout<<a[i]<<" ";
		i++;
		no=no>>1;
	}
	cout<<endl;
}

void subArray(int *a, int n){

	int range=(1<<n)-1;
	for(int i=0;i<=range;i++)
		getResults(a,i,n);
}

int main(){

	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);

	subArray(a,n);

	return 0;
}