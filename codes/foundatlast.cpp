#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t,mid;
	cin>>n;
	cin>>t;
	vector<int> v;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	int low=0,high=n-1;
	while(low<high){
		mid=low + (high-low)/2;
		if(v[mid]<=t){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	cout<<mid;

}