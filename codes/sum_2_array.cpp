#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	int a=0,i=pow(10,n-1);
	for(int j=0; j<n; j++){
		int x;
		cin>>x;
		a+=i*x;
		i/=10;
	}
	//cout<<a;
	int b=0;
	cin>>m;
	i=pow(10,m-1);
	for(int j=0; j<m; j++){
		int x;
		cin>>x;
		b+=i*x;
		i/=10;
	}
	//cout<<b;
	int c=a+b;
	vector <int> v;
	while(c!=0){
		v.push_back(c%10);
		c=c/10;
	}
	for(i=v.size()-1; i>=0; i--){
		cout<<v[i]<<", ";
	}
	cout<<"END";
}