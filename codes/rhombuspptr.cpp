#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		if(i==0 || i==(n-1)){
			int j=n-i;
			while(j>0){
				cout<<" ";
				j--;
			}
			j=n;
			while(j>0){
				cout<<"*";
				j--;
			}
		}
		else{
			int j=n-i;
			while(j){
				cout<<" ";
				j--;
			}
			cout<<"*";
			j=n-2;
			while(j){
				cout<<" ";
				j--;
			}
			cout<<"*";
		}
		cout<<endl;
	}
}