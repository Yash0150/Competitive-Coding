#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll maxx=0;

bool comp(string s1,string s2){
    if(s2>s1){
        return false;
    }
    if(s1>=s2){
        return true;
    }
}

int main(){
    vector<string> v;
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        string a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),comp);
    string o="";
    for(int i=0;i<n;i++){
        o+=v[i];
    }
    cout<<o;
}