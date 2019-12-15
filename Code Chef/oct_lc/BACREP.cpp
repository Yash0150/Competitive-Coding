#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,a,b,q;
	cin>>n>>q;
	std::vector<ll> v(n+1,0);
	for(ll i=0; i<n-1; i++){
		cin>>a>>b;
		if(a<b){
			v[b]=a;
		}
		else{
			v[a]=b;
		}
	}

	std::vector<ll> v1(n+1,0);
	for(ll i=1; i<=n; i++){
		cin>>v1[i];
	}
	char c;
	while(q--){
		cin>>c;
		std::vector<ll> v2(n+1,0);
		for(ll i=1; i<=n; i++){
			v2[i]+=v1[v[i]];
			if(v[i]==0 && (i!=1)){
				v2[i]+=v1[i];
			}
		}
		if(c=='+'){
			cin>>a>>b;
			v2[a]+=b;
		}
		else{
			cin>>a;
			cout<<v2[a]<<endl;
		}
		v1=v2;
	}
}