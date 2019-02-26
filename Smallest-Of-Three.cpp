// Program to Find Smallest of three Intgers Without using Comparision Operator

#include<bits/stdc++.h>
using namespace std;

int getSmallest(int x, int y, int z){

	int c=0;
	while(x and y and z){
		x--;y--;z--;
		c++;
	}
	return c;
}

int main(){

	int x=34,y=12,z=50;
	cout<<getSmallest(x,y,z);

	return 0;
}