#include<bits/stdc++.h>
using namespace std;
int p=0;
int sum=0;
bool isSafe(int A[10][10],int i,int j,int n){
	if (i >= 0 && i < n && j >= 0 && j < n && A[i][j] == 1) 
        return true; 
  
    return false; 
}

bool keep(int A[10][10],int i,int j, int n){
	if(i==n-1 && j==n-1){
		//A[i][j]=2;
		//p=1;
		return true;
	}

	if(isSafe(A,i,j,n)){
		A[i][j]=2;
		if(keep(A,i-2,j-1,n)==true){
			A[i-1][j]=2;
			A[i-2][j]=2;
			return true;
		}
		if(keep(A,i-2,j+1,n)==true){
			A[i-1][j]=2;
			A[i-2][j]=2;
			return true;
		}
		if(keep(A,i-1,j-2,n)==true){
			A[i-1][j]=2;
			A[i-1][j-1]=2;
			return true;
		}
		if(keep(A,i-1,j+2,n)==true){
			A[i-1][j]=2;
			A[i-1][j+1]=2;
			return true;
		}
		if(keep(A,i+1,j-2,n)==true){
			A[i+1][j]=2;
			A[i+1][j-1]=2;
			return true;
		}
		if(keep(A,i+1,j+2,n)==true){
			A[i+1][j]=2;
			A[i+1][j+1]=2;
			return true;
		}
		if(keep(A,i+2,j-1,n)==true){
			A[i+1][j]=2;
			A[i+2][j]=2;
			return true;
		}
		if(keep(A,i+2,j+1,n)==true){
			A[i+1][j]=2;
			A[i+2][j]=2;
			return true;
		}
		A[i][j]=1;
		return false;
	}

}

int main(){
	int n;
	cin>>n;
	int A[10][10];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>A[i][j];
		}
	}
	keep(A,0,0,n);
	if(p==1){
		for(int k=0; k<n; k++){
			for(int l=0; l<n; l++){
				if(A[k][l]==1){
					sum++;
				}
			}
			//cout<<endl;
		}
	}
	cout<<sum;
}