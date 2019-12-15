#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t){
		int n,sum=0;
		cin>>n;
		int A[n+1];
		A[0]=0;
		for(int i=1; i<=n; i++){
			cin>>A[i];
		}
		for(int i=1; i<=n; i++){
			A[i]+=A[i-1];
		}
		for(int i=1; i<=n; i++){
			A[i]=A[i]%n;
		}
		int C[10]={0};
		for(int i=0; i<=n; i++){
			C[A[i]]++;
		}
		for(int i=0; i<10; i++){
			int a=C[i];
			sum+=(a-1)*a/2;
		}
		cout<<sum;
		t--;
		cout<<endl;
	}
}