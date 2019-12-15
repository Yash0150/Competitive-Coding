#include<bits/stdc++.h>
using namespace std;
int q=0;

int isitpossible(vector<vector<int>> v, int i,int j,int num, int n){
	for(int x=0; x<n;x++){
		if(v[i][x]==num || v[x][j]==num){
			return 0;
		}
	}
	int n1=(i/3)*3;
	int n2=(j/3)*3;
	for(int x=n1; x<n1+2; x++){
		for(int y=n2; y<n2+2; y++){
			if(v[x][y]==num){
				return 0;
			}
		}
	}
	return 1;
}

int keep(vector<vector<int>> v, int i,int j, int n){
	if(i==n){
		for(int k=0; k<n; k++){
			for(int l=0; l<n; l++){
				cout<<v[k][l]<<" ";
			}
			cout<<endl;
		}
		q=1;
		cout<<endl;
		return 0;
	}

	if(j==n){
		keep(v,i+1,0,n);
	}
	else if(v[i][j]!=0){
		keep(v,i,j+1,n);
	}
	else{
		for(int num=1; num<=9; num++){
			if(isitpossible(v,i,j,num,n)){
				v[i][j]=num;
				keep(v,i,j+1,n);
				v[i][j]=0;
			}
			if(q==1){
				return 0;
			}
		}
	}
	return 0;
}

int main(){
	int n;
	cin>>n;
	vector< vector<int> > v(n,vector<int> (n,0));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int a;
			cin>>a;
			v[i][j]=a;
		}
	}
	cout<<endl;
	keep(v,0,0,n);
}