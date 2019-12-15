#include<bits/stdc++.h>
using namespace std;

int pattern(int n){
	cout<<1;
	cout<<endl;
	for(int i=2; i<=n; i++){
		cout<<i-1;
		for(int j=0; j<(i-2); j++){
			cout<<0;
		}
		cout<<i-1;
		cout<<endl;
	}
}

int main(void){
	int n;
	cin>>n;
	pattern(n);
}