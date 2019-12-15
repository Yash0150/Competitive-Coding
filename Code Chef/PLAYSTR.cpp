#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a1=0,a2=0,b1=0, b2=0;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0; i<n; i++){
			if(s1[i]=='1'){
				a1++;
			}
			else{
				a2++;
			}
			if(s2[i]=='1'){
				b1++;
			}
			else{
				b2++;
			}
		}
		if(a1==b1 && a2==b2){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}