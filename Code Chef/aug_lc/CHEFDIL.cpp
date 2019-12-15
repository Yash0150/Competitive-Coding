#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll cnt=0;
		for(auto i:s){
			if(i=='1'){
				cnt++;
			}
		}
		if((cnt&1)!=0){
			cout<<"WIN"<<endl;
		}
		else{
			cout<<"LOSE"<<endl;
		}
	}
}