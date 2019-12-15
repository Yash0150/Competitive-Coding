#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum=0;

ll solve(ll k,ll d,string s,ll i){
	if(i==k){
		for(ll i=k-2;i>=0; i--){
			if(abs(s[i]-s[i+1])>d){
				return 0;
			}
		}
		sum++;
		return 0;
	}
	if(s[i]=='9'){
		solve(k,d,s,i+1);
	}
	else{
		solve(k,d,s,i+1);

		s[i]=s[i]+1;
		solve(k,d,s,i);
		s[i]=s[i]-1;
	}
}

int main(){
	ll k=90,d=3;
	//cin>>k>>d;
	string s="929999999799999999999239999999999999999999999499999959999999993999399999999999989999999999";
	//cin>>s;
	solve(k,d,s,0);
	//s[0]='1'-1;
	cout<<sum;
}