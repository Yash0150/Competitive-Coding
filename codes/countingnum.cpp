#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    set <ll> s;
    ll n;
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
	return 0;
}
