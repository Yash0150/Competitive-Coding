#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n,n1;
	cin>>n;
	n1=n;
	int count=0;
	for(int i=0; n1!=0; i++){
		count+=pow((n1%10),3);
		n1/=10;
	}
	if(count==n){
		cout<<"true";
	}
	else{
		cout<<"false"<<count;
	}
}
