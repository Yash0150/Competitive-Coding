#include<bits/stdc++.h>
using namespace std;


int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		string s="";
		vector<string>v;
		for(long long i=0; i<n; i++){
			string a;
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		for(long long i=n-1; i>=0; i--){
			s+=v[i];
		}
		cout<<s<<endl;
	}
}