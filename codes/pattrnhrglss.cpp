#include<bits/stdc++.h>
using namespace std;

int pattern(int n){
	for(int i=n; i>=0; i--){
		for(int j=0; j<n-i; j++){
			cout<<" ";
		}
		for(int j=i; j>=0;j--){
			cout<<j<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			cout<<" ";
		}
		for(int j=i; j>=0; j--){
			cout<<j<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
		//for(int j=)
	}
}

int main(){
	int n;
	cin>>n;
	pattern(n);
}