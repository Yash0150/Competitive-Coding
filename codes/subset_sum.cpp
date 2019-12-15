#include<bits/stdc++.h>
using namespace std;

int subset_sum(vector<int> v,vector<int> o, int n,int &p,int i){
	if(i==n){
	  	if(!(o.empty())){
			int sum=0;
			for(int i=0;i<o.size();i++){
				sum+=o[i];
			}
			if(sum==0){
				p=1;
				//cout<<'a';
				//r//eturn 0;	
			}
			return 0;
		}
		return 0;
	}
	subset_sum(v,o,n,p,i+1);
	o.push_back(v[i]);
	subset_sum(v,o,n,p,i+1);
}

int main(){
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		int p=0;
		vector<int>v,o;
		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		subset_sum(v,o,n,p,0);
		if(p==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		t--;
	}
}