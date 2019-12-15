#include<bits/stdc++.h>
using namespace std;
#define ll long long

//std::vector<ll> vv(1000001);

int main(){
	ll n,a;
	cin>>n;
	std::vector<ll> v;
	for(ll i=0; i<n; i++){
		cin>>a;
		v.push_back(a);
	}
	ll q;
	cin>>q;
	while(q--){
		cin>>a;
		ll bst=0;
		for(ll i=0; i<n; i++){
			if(a%v[i]==0){
				bst++;
			}
		}
		cout<<((1<<bst)-1)*(1<<(n-bst))<<endl;
	}
}