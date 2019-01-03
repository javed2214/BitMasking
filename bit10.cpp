// https://www.codechef.com/problems/MARCHA1

#include<bits/stdc++.h>
using namespace std;

int findAns(int *a, int no, int m){

	int i=0,sum=0;
	while(no){
		if(no&1) sum+=a[i];
		i++;
		if(m==sum)
			return 1;
		no=no>>1;
	}
	if(sum==m) return 1;

	return 0;
}

string genSubsets(int *a, int c, int m){

	int range=(1<<c)-1;
	for(int i=0;i<=range;i++){
		if(findAns(a,i,m))
			return "Yes";
	}
	return "No";
}

int main(){

	int test;
	cin>>test;
	while(test--){
		int n,m;
		int a[1001];
		cin>>n>>m;
		int c=n;
		int i=0;
		while(n--)
			cin>>a[i++];

		cout<<genSubsets(a,c,m)<<endl;
	}	
	return 0;
}