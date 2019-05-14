
/*---------------------------
    Author : Javed Ansari
    Date   : 14 May 2019    
-----------------------------*/

// https://www.codechef.com/problems/JAIN

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD1 1000000007
#define MOD2 1000000009
#define DB(x) cout<<#x<<"="<<x<<"\n";
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define SORT(a) sort(a.begin(),a.end())
#define test(t) ll t; cin>>t; while(t--)
#define pi 2*acos(0.0)
#define endl cout<<"\n";
#define sss cout<<"*";
#define REPLACE(str,start,count,new_str) str.replace(start,count,new_str)
#define COUNT(str,ch) count(str.begin(),str.end(),ch)
#define maxa(a,n) *max_element(a,a+n)
#define mina(a,n) *min_element(a,a+n)
#define rev(v) reverse(v.begin(),v.end())
#define SUM(v) accumulate(v.begin(),v.end(),0)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define ll long long int
#define ld long double
#define SIZE 100000001
#define INF 0x7fffffff

void solveQues(){	

	test(t){

		ll n;
		cin>>n;
		string str;
		ll s=0,count[32];
		memset(count,0,sizeof(count));
		for(int i=0;i<n;i++){
			cin>>str;
			s=0;
			for(int j=0;j<str.length();j++){
				if(str[j]=='a')
					s|=1;
				else if(str[j]=='e')
					s|=2;
				else if(str[j]=='i')
					s|=4;
				else if(str[j]=='o')
					s|=8;
				else if(str[j]=='u')
					s|=16;
			}
			count[s]++;
		}
		ll ans=0;
		for(int i=0;i<32;i++){
			for(int j=i;j<32;j++){
				if((i|j)==31){
					if(i!=j) ans+=(ll)count[i]*(ll)count[j];
					else ans+=((ll)count[i]*(ll)(count[i]-1))/2LL;
				}
			}
		}
		cout<<ans;
		endl;
	}

	return;
}


int main(){

	FASTREAD;
	solveQues();

	return 0;
}
