#include<bits/stdc++.h>
using namespace std;

int comb(int n, int r){
	if(r==1){
		return n;
	}
	if(r==0 || r==n){
		return 1;
	}
	return comb(n-1,r) + comb(n-1,r-1);
}

int pascal(int n){
	for(int i=1; i<=n-1; i++){
		for(int k=n-i; k>0; k--){
			cout<<"  ";
		}
		for(int j=0; j<=i; j++){
			int m=comb(i,j);
			if(j==0){
				printf("%d",m);
			}
			else{
				printf("%4d",m);
			}
		}
		cout<<endl;
	}
}

int main(void){
	int n;
	cin>>n;
	for(int i=0; i<2*n; i++){
		cout<<" ";
	}
	cout<<1<<"\n";
	pascal(n);
	//cout<<m;
}