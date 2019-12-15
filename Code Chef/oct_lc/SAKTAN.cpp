#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t,q,n,a,b,m;
	cin>>t;
	while(t--){
		ll cnt=0,o1=0,o2=0,e1=0,e2=0;
		cin>>n>>m;
		ll A[n]={0};
		ll B[m]={0};
		cin>>q;
		while(q--){
			cin>>a>>b;
			A[a-1]++;
			B[b-1]++;
		}	
		for(ll i=0; i<n; i++){
			if((A[i]&1)){
				o1++;
			}
			else{
				e1++;
			}
		}
		for(ll i=0; i<m; i++){
			if((B[i]&1)){
				o2++;
			}
			else{
				e2++;
			}
		}
		cout<<(o1*e2 + o2*e1)<<endl;
	}
}