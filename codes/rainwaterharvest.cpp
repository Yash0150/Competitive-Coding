#include<bits/stdc++.h>
using namespace std;

int water(vector<int> v,vector<int> v1, vector<int>v2 , int n, int sum){
	int a;
	for(int i=1;i<=n-2; i++){
		a=((v2[n-i-2]<v1[i-1]) ? v2[n-i-2] : v1[i-1])-v[i];
		if(a>0){
			sum+=a;
		}
	}
    cout<<sum;
}

int main(){
	int n;
	cin>>n;
	vector<int> v,v1,v2;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int max=v[0];
	v1.push_back(max);
	for(int j=1; j<n-2; j++){
		if(v[j]>max){
			max=v[j];
		}
		v1.push_back(max);
	}
	max=v[n-1];
	v2.push_back(max);
	for(int j=n-2; j>1; j--){
		if(v[j]>max){
			max=v[j];
		}
		v2.push_back(max);
	}
	//for(int i=0; i<n-2; i++){
	//	cout<<v1[i]<<" ";
	//}
	//cout<<endl;
	//for(int i=0; i<n-2; i++){
	//	cout<<v2[i]<<" ";
	//}
	//cout<<endl;
	int sum=0;
	water(v,v1,v2,n,sum);

}