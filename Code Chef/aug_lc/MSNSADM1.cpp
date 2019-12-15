#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n; 
		vector<int>v(n);
		for(int i=0; i<n; i++){
			ll a;
			cin>>a;
			v[i]=a*20;
		}
		ll bst=INT_MIN;
		for(int i=0; i<n; i++){
			ll a;
			cin>>a;
			v[i]-=a*10;
			if(v[i]<0){
				v[i]=0;
			}
			if(v[i]>bst){
				bst=v[i];
			}
		}
		cout<<bst<<endl;
	}
}