#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum=0;
ll fact(ll n,ll m,ll k){
	if(m==0 || m==1){
		return 1;
	}
	else{
		while(n%k==0){
			n=n/k;
			sum++;
		}
		return m*fact(m-1,m-1,k);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m,k;
		cin>>n>>k;
		m=n;
		//ll sum=0;
		fact(n,m,k);
		cout<<sum;
		sum=0;
	}
}