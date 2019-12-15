#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m,k,l,r;
		vector<ll>v,p;
		cin>>n>>m>>k>>l>>r;
		for(int i=0; i<n; i++){
			int a,b,d;
			cin>>a>>d;
			if(a>k){
				b=a-m;
				if(b<k+1){
					b=k;
				}
			}
			if(a<k){
				b=a+m;
				if(b>k-1){
					b=k;
				}
			}
			if(a==k){
				b=k;
			}
			v.push_back(b);
			cout<<b<<" ";
			p.push_back(d);
		}
		cout<<endl;
		ll bst=INT_MAX;
		for(int i=0; i<n; i++){
			if(v[i]<=r && v[i]>=l){
				bst=min(bst,p[i]);
			}
		}
		if(bst==INT_MAX){
			bst=-1;
		}
		cout<<bst<<endl;
	}
}