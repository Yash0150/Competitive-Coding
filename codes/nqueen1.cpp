#include<bits/stdc++.h>
using namespace std;
int sum=0;

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

int keep(vector<vector<int>> v,int n,int i){
	if(i==n){
		for(int k=0; k<n; k++){
			for(int l=0; l<n; l++){
				if(v[k][l]==1){
					cout<<"{"<<k+1<<","<<l+1<<"} ";
				}
			}
		}
		cout<<" ";
		sum++;
		return 0;
	}

	for(int j=0; j<n; j++){
		if(isitpossible(v,i,j,n)){
			v[i][j]=1;
			keep(v,n,i+1);
			v[i][j]=0;
		}
	}
	return 0;

}



int main(){
	int n;
	cin>>n;
	vector <vector<int>> v(n,vector<int>(n,0));
	keep(v,n,0);
	cout<<endl;
	cout<<sum;
}