#include<bits/stdc++.h>
using namespace std;

int sieve(vector<int> &v){
	vector<bool>prime(1000000,true);
	prime[0]=false;
	prime[1]=false;
	for(int i=2; i<1000000; i++){
		if(prime[i]==true){
			for(int j=i*2; j<1000000; j+=i){
				prime[j]=false;
			}
			v.push_back(i);
		}

	}
}

int main(){
	vector<int> v;
	sieve(v);
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		for(int i=0;i<n; i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		t--;
	}
}