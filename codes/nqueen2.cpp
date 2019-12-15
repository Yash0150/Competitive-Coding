#include<bits/stdc++.h>
using namespace std;

bool isitpossible(vector <vector <int> > v, int i, int j, int n){
	for(int x=0; x<n; x++){
		if(v[i][x]!=0 || v[x][j]!=0){
			return false;
		}
	}
	int a=i-1,b=j-1;
	while(a>=0 && b>=0){
		if(v[a][b]==1){
			return false;
		}
		a--;
		b--;
	}
	a=i-1;
	b=j+1;
	while(a>=0 && b<n){
		if(v[a][b]==1){
			return false;
		}
		a--;
		b++;
	}
	return true;
}

bool keep(vector <vector <int> > v, int i, int n){
	if(i==n){
		for(int k=0; k<n; k++){
			for(int l=0; l<n; l++){
				cout<<v[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	for(int l=0; l<n; l++){
		if(isitpossible(v,i,l,n)){
			v[i][l]=1;
			bool yes=keep(v,i+1,n);
			if(yes==1){
				return true;
			}
			v[i][l]=0;
		}
		
	}
	return false;
}

int main(void){
	int n;
	cin>>n;
	vector <vector <int>> v(4, vector <int> (4,0));
	keep(v,0,n);
	//cout<<m;
}