#include<bits/stdc++.h>
using namespace std;
#define ll double

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v;
		ll mean=0;
		for(ll i=0; i<n;i++){
			ll a;
			cin>>a;
			mean+=a;	
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		mean/=n;
		ll i;
		for(i=0;i<n; i++){
			if(v[i]==mean){
				cout<<i+1<<endl;
				break;
			}
		}
		if(i==n){
			cout<<"Impossible"<<endl;
		}
	}	
}