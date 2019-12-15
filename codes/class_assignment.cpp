#include<bits/stdc++.h>
using namespace std;

int print(string s,int &sum,int n){
	if(s.size()==n){
		sum++;
		//cout<<s<<endl;
		return 0;
	}
	//if(a<n){
		print(s+'a',sum,n);
	//}
	if(s[s.size()-1]=='a' || s.size()==0){
		print(s+'b',sum,n);
	    return 0; 
	}
	return 0;
}

int fib(int n){
	if(n==1){
		return 2;
	}
	if(n==2){
		return 3;
	}
	if(n<1){
		return 0;
	}
	return fib(n-1)+fib(n-2);
}

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		//string s="";
		//int sum=0;
		int m=fib(n);
		cout<<"#"<<i+1<<" : "<<m;
	}
}