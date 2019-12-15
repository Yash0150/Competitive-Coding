#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t,a,b,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		ll A[n]={0};
		for(ll i=0; i<m; i++){
			cin>>a>>b;
			A[a]++;
			A[b]++;
		}
		if(!(m&1)){
			cout<<1<<endl;
			for(ll i=0; i<n; i++){
				cout<<1<<" ";
			}
			cout<<endl;
		}
		else{
			ll p=-1;
			for(ll i=0; i<n; i++){
				if(A[i]&1){
					p=i;
					break;
				}
			}
			if(p==-1){
				cout<<3<<endl;
				for(ll i=1; i<=n; i++){
					if(i==a){
						cout<<2<<" ";
					}
					else if(i==b){
						cout<<3<<" ";
					}
					else{
						cout<<1<<" ";
					}
				}
				cout<<endl;
			}
			else{
				cout<<2<<endl;
				for(ll i=1; i<=n; i++){
					if(i==p){
						cout<<2<<" ";
					}
					else{
						cout<<1<<" ";
					}
				}
				cout<<endl;
			}
		}
	}
}