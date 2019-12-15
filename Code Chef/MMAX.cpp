#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k,sum=0,B;
		cin>>n>>k;
		ll a=k/n;
		ll b=k%n;
		B=b;
		vector<ll>v(n,a);
		//cout<<b;
		if((n&1)==0){
			if(b>0 && b<=(n/2)){
				ll j=1;
				while(b--){
					v[j]++;
					j+=2;
				}
			}
			if(b>(n/2)){
				ll j=0;
				//cout<<'a';
				for(int i=1; i<=(n/2); i++){
					v[j]++;
					b--;
					j+=2;
				}
				j=n-1;
				while(b--){
					v[j]++;
					j-=2;
				}
			}
		}
		else{
			if(b>0 && b<=((n-1)/2)){
				ll j=1;
				while(b--){
					v[j]++;
					j+=2;
				}
			}
			if(b>((n-1)/2)){
				ll j=0;
				//cout<<'a';
				for(int i=1; i<=((n+1)/2); i++){
					v[j]++;
					b--;
					j+=2;
				}
				j=n-2;
				while(b--){
					v[j]++;
					j-=2;
				}
			}
		}
		for(int i=0; i<n-1; i++){
			//cout<<v[i]<<" ";
			sum+=abs(v[i]-v[i+1]);
		}
		cout<<a<<" "<<B<<" "<<sum<<endl;
	}
}	
