#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<"*";
	for(int i=0; i<(n-3)/2; i++){
		cout<<" ";
	}
	for(int i=0; i<(n+1)/2; i++){
		cout<<"*";
	}
	cout<<endl;
	for(int i=0; i<(n-3)/2; i++){
		cout<<"*";
		for(int j=0; j<(n-3)/2; j++){
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	for(int i=0; i<n; i++){
		cout<<"*";
	}
	cout<<endl;
	for(int i=0; i<(n-3)/2; i++){
		for(int j=0; j<(n-1)/2; j++){
			cout<<" ";
		}
		cout<<"*";
		for(int j=0; j<(n-3)/2; j++){
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	for(int i=0; i<(n+1)/2; i++){
		cout<<"*";
	}
	for(int i=0; i<(n-3)/2; i++){
		cout<<" ";
	}
	cout<<"*";
	cout<<endl;
}