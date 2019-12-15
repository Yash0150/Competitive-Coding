#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long power(long long x,long long y){
	if( y==0 ){
		return 1;
	}
	if( (y&1) ==0){
		long long z= power(x,y/2);
		return z*z;
	}
	if( (y&1) !=0){
		long long z= power(x,y/2);
		return x*z*z;
	}
}

ll bst(ll n,string s,ll &cnt){
	for(ll i=n-1; i>=1; i--){
		if(s[i]!=s[i-1]){
			cnt+=(((power(10,(n-i-1)))%1000000009)*((s[i]-'0')%1000000009))%1000000009;
		}
	}
	cnt+=(((power(10,(n-1)))%1000000009)*((s[0]-'0')%1000000009))%1000000009;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,d,cnt=0;
		cin>>a>>b>>c>>d;
		string s1;
		for(int i=b; i<=d;i++){
			s1=to_string(i);
			bstt(s1.size(),s1,cnt);
		}
		cout<<cnt%(1000000009)<<endl;
	}
}