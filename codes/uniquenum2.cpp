#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v,v1,v2;
	int c=0;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		c=(c^a);
		v.push_back(a);
	}
	//cout<<(c&1);
	int k=0;
	while(c){
		if((c&1)==1){
			break;
		}
		k++;
		c=c>>1;
	}
	//cout<<(2&(1<<k));
	for(int i=0; i<n; i++){
		int a=v[i];
		if((a&(1<<k))==0){
			v1.push_back(a);
		}
		else{
			v2.push_back(a);
		}
	}
	k=0;
	for(int i=0; i<v1.size(); i++){
		int a=v1[i];
		k=(k^a);
	}
	cout<<k<<" ";
	k=0;
	for(int i=0; i<v2.size(); i++){
		int a=v2[i];
		k=(k^a);
	}
	cout<<k;

}