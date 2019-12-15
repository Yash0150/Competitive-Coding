#include<bits/stdc++.h>
using namespace std;

int print(string o,int open1,int close1,int n){
	if(o.size()==2*n){
		cout<<o<<endl;
	}
	if(close1<open1){
		//open1++;
		//close1++;
		print(o+')',open1,close1+1,n);
	}
	if(open1<n){
		//open1++;
		print(o+'(',open1+1,close1,n);
	}
}

int main(){
	int n;
	cin>>n;
	int open1=0, close1=0;
	string o;
	print(o,open1,close1,n);
}