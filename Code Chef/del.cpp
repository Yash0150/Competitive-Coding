#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll even(ll n,ll &e,ll &o){
	ll cnt=0;
	while(n){
		if((n&1)==1){
			cnt++;
		}
		n=n>>1;
	}
	if((cnt&1)==0){
		e++;
	}
	else{
		o++;
	}
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,e=0,o=0;
		cin>>n;
		vector<ll>v,v1,v2;
		for(ll i=0; i<n; i++){
			ll a;	
			cin>>a;
			v.push_back(a);
		}	
		for(int i=0; i<v.size()-1; i++){
			ll a=v[i];
			v.erase(remove(v.begin()+i+1, v.end(), a),v.end());
		}
		v1.push_back(v[0]);
		//even(v[0],e,o);
		//cout<<e<<" "<<o<<endl;
		for(int i=1; i<n; i++){
			for(int j=0; j<v1.size(); j++){
				ll a=(v[i])^(v1[j]);
				if(a!=0){
					v2.push_back(a);
				}
			}
			v1.push_back(v[i]);
			for(int j=0; j<v2.size(); j++){
				v1.push_back(v2[j]);
			}
			v2.clear();
			cout<<endl;
		}
	}
}	