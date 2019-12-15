#include<bits/stdc++.h>
using namespace std;

int main(){
	vector < vector <int> > v;
	int n,m,k=1;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			v.push_back(vector <int>());
			int a;
			cin>>a;
			v[i].push_back(a);
		}
	}
	for(int i=0; i<m; i++){
		if(k==1){
			for(int j=0; j<n; j++){
				cout<<v[j][i]<<", ";
			}
			//cout<<endl;
		}
		else if(k==-1){
			for(int j=n-1; j>=0; j--){
				cout<<v[j][i]<<", ";
			}
		}
		k*=-1;
	}
	cout<<"END";

}
