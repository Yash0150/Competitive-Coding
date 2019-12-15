#include<bits/stdc++.h>
using namespace std;
int k=1;

int fib(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}
int fib1(int n){
	for(int i=0;i<n;i++){
		for(int j=0; j<=i;j++){
			int m=fib(k);
			cout<<m<<"	";
			k++;
		}
		cout<<endl;
	}
}

 int main(void){
 	int n;
 	cin>>n;
 	fib1(n);
 }