#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a;
		cin>>n;
		unordered_map<ll,ll> m,m1;
		ll A[n];
		for(ll i=0; i<n; i++){
			cin>>A[i];
		}
		m1[A[n-1]]=1;
		for(ll i=n-2; i>=0; i--){
			//m[a]=1;
			ll cnt=0;
			for(ll j=1; j<=sqrt(A[i]); j++){
				if((A[i]%j)==0){
					if(m1[j]!=0){
						m[j]++;
					}
					if(m1[A[i]/j]!=0 && ((A[i]/j)!=j)){
						m[A[i]/j]++;
					}
				}
			}
			//m[A[i]]=cnt;
			if(m1[A[i]]!=0){
				m1[A[i]]++;
			}
			else{
				m1[A[i]]=1;
			}
		}
		ll bst=0;
		for(auto i:m){
			bst=max(bst,i.second);
		}
		cout<<bst<<endl;
	}
}