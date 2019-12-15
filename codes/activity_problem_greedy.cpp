#include<bits/stdc++.h>
using namespace std;
#define ll long long

int pair_sort(vector<int> &v1,vector <int> &v2,int n){
	vector<pair<int,int>> v(n);
	for(int i=0; i<n; i++){
		v[i]=make_pair(v2[i],v1[i]);
	}
	sort(v.begin(), v.end());
	vector<pair<int,int>>::iterator it;
	int i=0;
	for(it=v.begin();it!=v.end();it++){
		v1[i]=it->second;
		v2[i]=it->first;
		i++;
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> start,end;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		start.push_back(a);
	}
	for(int i=0; i<n; i++){
		int a; 
		cin>>a;
		end.push_back(a);
	}
	pair_sort(start,end,n);

	int num_of_activity=1;
	int j=0;
	for(int i=0;i<n-1; i++){
		if(start[i+1]>=end[j]){
			num_of_activity++;
			j=i+1;
		}
	}
	cout<<num_of_activity;
}