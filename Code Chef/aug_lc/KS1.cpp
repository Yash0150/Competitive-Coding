#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t,p,x=0;
	cin>>t;
	while(t--){
		ll n,a,cnt=0;
		cin>>n;
		unordered_map<ll,list<int>> m;
		ll A[n+1]={0};
		m[0].push_back(0);;
		for(ll i=1; i<=n; i++){
			cin>>a;
			A[i]=(a)^A[i-1];
			m[A[i]].push_back(i);		
		}
		for(auto i: m){
			x=1;
			ll B[i.second.size()+1]={0};
			for(auto j : i.second){
				cnt+=(j*(x-1)-B[x-1]-(x-1));
				B[x]=B[x-1]+j;
				x++;
			}
			//cout<<cnt<<" "<<i.first<<endl;
		}	
		cout<<cnt<<endl;
	}
}