#include<bits/stdc++.h>
using namespace std;
#define ll long long
int A[9]={2000,500,200,100,50,20,10,5,1};

int main(){
	int n;
	cin>>n;
	int B[9]={0};
	int C[9]={0};
	int i=0,j=0;
	while(n!=0 && i<9){
		if((n-A[i])<0){
			i++;
		}
		else{
			B[i]++;
			n=n-A[i];
		}
	}
	cout<<"Currency  Count"<<endl;
	for(int k=0; k<9; k++){
		if(B[k]!=0){
			cout<<A[k]<<" : "<<B[k]<<endl;
		}
	}

}

