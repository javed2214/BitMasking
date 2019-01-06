// Program to Find Two Unique Numbers which Occurs only Once in an Array.
// While All Other Numbers Occur Twice	

#include<bits/stdc++.h>
using namespace std;

void findNumbers(int *a, int n, int x, int mask){

	int res=0;
	for(int i=0;i<n;i++){
		if(mask&a[i])
			res=res^a[i];
	}
	x=res^x;
	cout<<res<<" "<<x;
}

void findMask(int *a, int n){

	int x=0;
	for(int i=0;i<n;i++)
		x=x^a[i];

	int i=0;
	int temp=x;		// It is Used to Check Position of Rightmost Set Bit
	while(temp){
		if(temp&1)
			break;
		i++;
		temp=temp>>1;
	}
	int mask=1<<i;

	findNumbers(a,n,x,mask);
}

int main(){

	int a[]={1,2,3,4,5,5,7,3,2,1};
	int n=sizeof(a)/sizeof(int);

	findMask(a,n);
		
	return 0;
}