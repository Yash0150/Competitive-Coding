#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a,l=0,r=0;
		cin>>n;
		ll A[n][2];
		for(int i=0; i<n; i++){
			for(int j=0; j<2; j++){
				A[i][j]=0;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n/2; j++){
				char c;
				cin>>c;
				if(c=='1'){
					A[i][0]++;
					l++;
				}
			}
			for(int j=n/2; j<n; j++){
				char c;
				cin>>c;
				if(c=='1'){
					A[i][1]++;
					r++;
				}
			}
		}
		ll c=abs(l-r);
		ll ans=c;
		//cout<<c<<endl;
		if(c==0){
			cout<<0<<endl;
		}
		else{
			for(int i=0; i<n; i++){
				if(l>r){
					a=abs(c-(2*A[i][0])+(2*A[i][1]));
				}
				else{
					a=abs(c+(2*A[i][0])-(2*A[i][1]));	
				}
				//cout<<a<<endl;
				ans=min(ans,a);
			}
			cout<<ans<<endl;
		}
	}
}