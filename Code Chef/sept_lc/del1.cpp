#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,p=0;
		cin>>n;
		ll A[n];
		for(ll i=0; i<n; i++){
			cin>>A[i];
		}
		string s;
		cin>>s;
		ll a=A[0];
		if(n==1){
			cout<<"YES"<<endl;
			continue;
		}
		for(ll i=1; i<n; i++){
			if(A[i]!=-1){
				if(s[i-1]=='<' && A[i]<=a){
					cout<<"NO"<<endl;
					p=1;
					break;
				}
				else if(s[i-1]=='=' && A[i]!=a){
					cout<<"NO"<<endl;
					p=1;
					break;
				}
				else if(s[i-1]=='>' && A[i]> =a){
					cout<<"NO"<<endl;
					p=1;
					break;
				}
				else{
					a=A[i];
				}
			}
			else{
				if(s[i-1]=='='){
					a=A[i];
				}
				else if(s[i-1]=='>'){
					a--;
					if(a<0){
						cout<<"NO"<<endl;
						p=1;
						break;
					}
				}
				else if(s[i-1]=='<'){
					a++;
				}
			}
		}
		if(p==0){
			cout<<"YES"<<endl;
		}
	}
}