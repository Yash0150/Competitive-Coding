#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int A[n],C[n]={INT_MIN};
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	for(int i=0; i<n-1; i++){
		int a,b;
		for(int j=i+1; j<i+1+m && j<n; j++){
			if(A[i]>0){
				if(A[j]<0){
					if(A[i]>=-A[j]){
						C[j]=-A[j];
						if(C[i]==INT_MIN){
							C[i]=A[i]+2*A[j];
							A[i]=A[i]+A[j];
						}
						else{
							C[i]=C[i]+2*A[j];
							A[i]=A[i]+A[j];
						}
						for(int i=0; i<n; i++){
							cout<<C[i]<<" ";
						}
						cout<<endl;
						for(int i=0; i<n; i++){
							cout<<"."<<A[i]<<" ";
						}
						cout<<endl;
					}
				}
				else{
					C[j]=A[j];
				}
			}
			else{
				C[i]=A[i];
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<C[i]<<" ";
	}
}