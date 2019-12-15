#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t,p;
	cin>>t>>p;
	priority_queue<ll> pq;
	while(t){
		ll k;
		cin>>k;
		if(k==1){
		    ll n,m;
			cin>>n>>m;
			if(pq.size()<p){
				pq.push((n*n+m*m));
			}
			else if(pq.top()>(n*n+m*m)){
				pq.pop();
				pq.push((n*n+m*m));
			}
		}
		else if(k==2){
			cout<<pq.top()<<endl;
		}
		//cout<<endl;
		t--;
	}
}