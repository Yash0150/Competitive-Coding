#include<bits/stdc++.h>
using namespace std;

int pattern(int n){
	for(int i=1; i<=n; i++){
		for(int j=1;j<=i; j++){
			cout<<j<<"	";
		}
		for(int j=1;j<=2*(n-i)-1; j++){
			cout<<"	";
		}
		for(int j=i;j>=1; j--){
			if(j!=n){
				cout<<j<<"	";
			}
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	pattern(n);
}