#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0; i<=(n/2); i++){
		for(int j=n-1; j>=0;j--){
			if(j<=((n/2)-i) || j>=((n/2)+i)){
			cout<<"*"<<"	";
			}
			else{
			cout<<""<<"	";
			}
		}
		cout<<endl;
	}
	for(int i=(n/2)-1; i>=0; i--){
		for(int j=n-1; j>=0;j--){
			if(j<=((n/2)-i) || j>=((n/2)+i)){
			cout<<"*"<<"	";
			}
			else{
			cout<<""<<"	";
			}
		}

		cout<<endl;
	}
}