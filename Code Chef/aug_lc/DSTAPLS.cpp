#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a=n/k;
		ll x=a/k;
		if(x*k==a){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}