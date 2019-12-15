#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll A[n];
		ll x=k/n;
		k=k%n;
		if((x%3)==1){
			k+=n;
		}
		else if((x%3)==2){
			k+=2*n;
		}
		for(ll i=0; i<n; i++){
			cin>>A[i];
		}
		if((x>=1) && (n&1)){
			A[n/2]=0;
		}
		for(ll i=0; i<k; i++){
			A[i%n]=(A[i%n])^(A[n-(i%n)-1]);
		}
		for(ll i=0; i<n; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
	}
}