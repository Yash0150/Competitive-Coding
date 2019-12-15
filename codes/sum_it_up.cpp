#include<bits/stdc++.h>
using namespace std;
set <vector<int>> s;
int print(vector<int> v,vector<int> v1,int n,int t,int i){
	if(t==0){
		s.insert(v1);
		return 0;
	}
	
	if(i<n && t>=0){
		print(v,v1,n,t,i+1);
		v1.push_back(v[i]);
		print(v,v1,n,t-v[i],i+1);
	}
	return 0;

}

int main(void){
	int n; cin>>n;
	vector<int> v,v1;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int t;
	cin>>t;
	sort(v.begin(), v.end());
	print(v,v1,n,t,0);
	set<vector<int>> :: iterator it;
	for(it=s.begin();it!=s.end();it++){
		vector<int> v2=*it;
		for(int i=0;i<v2.size();i++){
			cout<<v2[i]<<" ";
		}
		cout<<endl;
	}
}