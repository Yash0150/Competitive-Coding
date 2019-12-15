#include<iostream>
#include<vector>
using namespace std;
#define ll long long
vector<bool> v(1000000,true);

ll seive(){
	v[0]=false;
	v[1]=false;
	for(int i=2; i<1000000; i++){
		if(v[i]==true){
			for(int j=2*i; j<1000000; j+=i){
				v[j]=false;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	seive();
	for(int i=2; i<n; i++){
		if(v[i]==true){
			cout<<i<<" ";
		}
	}
}