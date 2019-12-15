#include <bits/stdc++.h>
using namespace std;

int main(){
	int m;
	cin>>m;
	int n=(m/2)+1;
	for(int j=0; j<4*n-4; j++){
			cout<<" ";
	}
	cout<<1;
	cout<<endl;
	for(int i=n-2; i>=0; i--){
		if(i!=0){
			for(int j=0; j<4*i; j++){
			cout<<" ";
			}
		}
		for(int j=(n-i); j>=1; j--){
			cout<<j<<" ";
		}
		for(int j=2*(n-i-1)-1;j>=1; j--){
			cout<<"  ";
		}
		for(int j=1; j<=(n-i); j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(int i=1; i<n-1; i++){
		for(int j=0; j<4*i; j++){
			cout<<" ";
		}
		for(int j=n-i; j>=1; j--){
			cout<<j<<" ";
		}
		for(int j=2*(n-i-1)-1;j>=1; j--){
			cout<<"  ";
		}
		for(int j=1; j<=(n-i); j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(int j=0; j<4*n-4; j++){
			cout<<" ";
	}
	cout<<1;
	//cout<<endl;
}