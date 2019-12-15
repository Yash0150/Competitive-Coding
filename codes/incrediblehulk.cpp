#include<bits/stdc++.h>
using namespace std;

int main(void){
	int m;
	cin>>m;
	vector <int> v;
	for(int i=0; i<m; i++){
		int n;
		cin>>n;
		v.push_back(n);
	}
	
	for(int i=0; i<m; i++){
		int count=0;
		while(v[i]>0){
			if((v[i]) & 1){
				count++;
			}
			v[i]=v[i]>>1;
		}
		cout<<count<<endl;
	}	
}
	
	
