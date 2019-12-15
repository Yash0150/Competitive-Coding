#include<bits/stdc++.h>
using namespace std;

int pattern(int n){
	for(int i=1; i<=n; i++){
		if(i&1){
			for(int j=0; j<i; j++){
				cout<<1;
			}
			cout<<endl;
		}
		else{
			cout<<1;
			for(int j=0; j<(i-2); j++){
				cout<<0;
			}
			cout<<1;
			cout<<endl;
		}
	}
}

int main(void){
	int n;
	cin>>n;
	pattern(n);
}