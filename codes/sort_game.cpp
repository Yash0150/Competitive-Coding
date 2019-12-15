#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool  comp(pair<ll,string>p1,pair<ll,string>p2){
	if(p1.first>p2.first){
		return false;
	}
	else if(p1.first<p2.first){
		return true;
	}
	else{
		if(p2.second>p1.second){
			return false;
		}
		else{
			return true;
		}
	}

}
int main(){
	ll m;
	cin>>m;
	ll n;
	cin>>n;
	vector<pair<ll,string>>s;
	for(int i=0; i<n; i++){
		ll a;
		string s1;
		cin>>s1>>a;
		//if(a>=m){
			s.push_back(make_pair(a,s1));
		//}
	}
	sort(s.begin(), s.end(),comp);
	reverse(s.begin(), s.end());
	for(int i=0; i<n; i++){
		cout<<s[i].second<<" "<<s[i].first<<endl;
	}
}