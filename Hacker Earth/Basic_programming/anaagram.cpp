#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int cnt=0,ans=0;
		unordered_map<char,int> m;
		for(int i=0; i<a.size(); i++){
			if(m.count(a[i])==1){
				m[a[i]]++;
			}
			else{
				m.insert(make_pair(a[i],1));
			}
		}
		for(int i=0; i<b.size(); i++){
			if(m.count(b[i])==1){
				m[b[i]]--;
				cnt++;
			}
			else{
				ans++;
			}
			if(m[b[i]]==0){
				m.erase(b[i]);
			}
		}
		ans+=a.size()-cnt;
		cout<<ans<<endl;
	}
}