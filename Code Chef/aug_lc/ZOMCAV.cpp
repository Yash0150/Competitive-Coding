#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	ll p=0;
	while(t--){
		ll n;
		cin>>n;
		ll A[n+2]={0};
		ll B[n+2],C[n+1];
		for(ll i=1; i<=n; i++){
			cin>>B[i];
			ll a=((i-B[i])>0) ? (i-B[i]) : 1;
			ll b=((i+B[i])<=n) ? (i+B[i]) : n;
			A[a]++;
			A[b+1]--;
		}
		for(ll i=1; i<=n+1; i++){
			A[i]=A[i]+A[i-1];
		}
		unordered_map<int,int>m;
		for(int i=1; i<=n; i++){
			cin>>C[i];
			if(m.count(A[i])==0){
				m.insert(make_pair(A[i],1));
			}
			else{
				m[A[i]]++;
			}
		}
		for(int i=1; i<=n; i++){
			if(m.count(C[i])!=0){
				m[C[i]]--;
				if(m[C[i]]==0){
					m.erase(C[i]);
				}
			}
			else{
				p=1;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(p==0){
			cout<<"YES"<<endl;
		}
		p=0;
	}
}