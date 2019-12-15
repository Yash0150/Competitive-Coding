#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*ll inc(vector <ll> v, ll n){
	for(ll i=0; i<n; i++){
		if(count(v.begin(),v.end(),v[i])>2){
			return false;
		}
		
	}
	return true;
}*/
ll i=0;
ll inc(vector <ll> v, ll n){
	ll sum=0;
	while(v[i]>v[i+1] && i<n-1){
		sum++;
		i++;
	}
	return sum;
}

ll dec(vector <ll> v, ll n){
	ll sum=0;
	//ll i=0;
	if(v[i]==v[i+1]){
		i++;
		sum++;
	}
	while(v[i]<v[i+1] && i<n-1){
		sum++;
		i++;
	}
	return sum;
}

int main(void){
	ll n;
	cin>>n;
	vector <ll> v;
	for(ll i=0; i<n; i++){
		ll a;
		cin>>a;
		v.push_back(a);
	}
	ll a=inc(v,n);
	ll b=dec(v,n);
	if(i==n-1){
		cout<<"true";
	}
	else{
		cout<<i;
	}
}
