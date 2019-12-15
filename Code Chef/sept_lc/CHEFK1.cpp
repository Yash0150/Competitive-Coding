#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		if(n==1){
			if(m==0){
				cout<<0<<endl;
			}
			else if(m==1){
				cout<<1<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}
		else if(n==2){
			if((m==0)||(m>=4)){
				cout<<-1<<endl;
			}
			else if(m==1){
				cout<<1<<endl;
			}
			else{
				cout<<2<<endl;
			}
		}
		else{
			ll x=n/2;
			if((0<=m && m<(n-1))){
				//cout<<(0<=m<(n-1));
				cout<<-1<<endl;
			}
			else if((m>(((n)*(n+1))/2))){
				//cout<<1;
				cout<<-1<<endl;
			}
			else if((n-1)<=m && m<=(n+1)){
				cout<<2<<endl;
			}
			else if((n+1)<m && m<=2*n){
				cout<<3<<endl;
			}
			else{
				if((n&1)==0){
					cout<<(m-1)/x<<endl;
				}
				else{
					ll y=(m-1)%n;
					if(y<x){
						cout<<((m-1)/n)*2<<endl;
					}
					else{
						cout<<(((m-1)/n)*2)+1<<endl;
					}
				}
			}
		}
	}
}