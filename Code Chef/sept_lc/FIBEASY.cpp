#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	vector<ll> v;
	ll a=1;
	//fib();
	for(ll i=0; i<=59; i++){
		v.push_back(a);
		//cout<<a<<" ";
		//cout<<dp[a-1]<<" ";
		a*=2;
	}
	//cout<<dp[n-1];
	while(t--){
		ll n;
		cin>>n;
		if(n==2){
			cout<<1<<endl;
		}
		else{
			for(ll i=0; i<=59; i++){
				if((n/v[i])==1){
					if(i==1){
						cout<<1<<endl;
						break;
					}
					if((i%4)==0){
						cout<<0<<endl;
						break;
					}
					if((i%4)==1){
						cout<<9<<endl;
						break;
					}
					if((i%4)==2){
						cout<<2<<endl;
						break;
					}
					if((i%4)==3){
						cout<<3<<endl;
						break;
					}
				}
			}
		}

	}

}