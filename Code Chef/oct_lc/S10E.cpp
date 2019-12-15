#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t,n,a;
	cin>>t;
	while(t--){
		std::vector<ll> v;
		cin>>n;
		cin>>a;
		ll cnt=1;
		v.push_back(a);
		for(ll i=1; i<n; i++){
			cin>>a;
			ll b=INT_MAX;
			ll c=(i-5>=0) ? i-5 : 0;
			for(ll j=i-1; j>=c; j--){
				b=min(b,v[j]);
			}
			if(a<b){
				cnt++;
			}
			v.push_back(a);
		}
		cout<<cnt<<endl;
	}
}