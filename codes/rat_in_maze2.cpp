#include<bits/stdc++.h>
using namespace std;
int p=0;
bool isSafe(char A[1000][1000],int i,int j,int n,int m){
	if (i >= 0 && i < n && j >= 0 && j < m && A[i][j] == 'O') 
        return true; 
  
    return false; 
}

bool keep(char A[1000][1000],int B[1000][1000], int i,int j, int n,int m){
	if(i==n-1 && j==m-1){
		B[i][j]=1;
		for(int l=0; l<n; l++){
			for(int k=0; k<m;k++){
				cout<<B[l][k]<<" ";
			}
			cout<<endl;
			//return 0;
		}
		p=1;
        return true;
	}

	if(isSafe(A,i,j,n,m)){
		B[i][j]=1;
		A[i][j]='1';
		if(keep(A,B,i,j+1,n,m)==true){
			return true;
		}
		if(keep(A,B,i+1,j,n,m)==true){
			return true;
		}
		if(keep(A,B,i,j-1,n,m)==true){
			return true;
		}
		if(keep(A,B,i-1,j,n,m)==true){
			return true;
		}
		B[i][j]=0;
		A[i][j]='1';
		return false;
	}
	return false;

}

int main(){
	int n,m;
	cin>>n>>m;
	char A[1000][1000];
	int B[1000][1000]={0};
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>A[i][j];
		}
	}
	keep(A,B,0,0,n,m);
	if(p==0){
		cout<<0;
	}
    return 0;
}
