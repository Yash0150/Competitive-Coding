#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll p,o,ans=0;
		cin>>p>>o;
		ll n;
		if(p>o){
			swap(p,o);
		}
		while(n--){
			ll a,b;
			cin>>a>>b;
			if(a==1){
				ans+=(a*p + b*o);
			}
			else{
				ans+=b*p;
			}
		}
		cout<<ans<<endl;
	}
}