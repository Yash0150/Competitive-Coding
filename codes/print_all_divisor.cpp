#include<bits/stdc++.h>
using namespace std;

int divisor(int n){
	for(int i=2; i<sqrt(n); i++){
		if(n%i==0){
			while(n%i==0){
				cout<<i<<endl;
				n/=i;
			}
		}
	}
	if(n!=1){
		cout<<n;
	}
}

int main(){
	int n;
	cin>>n;
	divisor(n);
}