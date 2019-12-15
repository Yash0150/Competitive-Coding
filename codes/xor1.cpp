#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		string a,b,c;
		int i=0;
		cin>>a>>b;
		int C[100];
		for(i=0; i<a.size(); i++){
			int x=a[i]-'0';
			int y=b[i]-'0';
			C[i]=(x^y);
		}
		for(int i=0; i<a.size(); i++){
			cout<<C[i];
		}
		cout<<endl;
		n--;
	}
}