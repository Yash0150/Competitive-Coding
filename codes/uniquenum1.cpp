#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int sum=v[0];
	for(int i=0; i<n-1; i++){
		sum= ((sum) ^ (v[i+1]));
	}
	for(int i=0; i<n; i++){
		sum= ((sum) ^ (v[i]));
	}
	cout<<sum;
}
