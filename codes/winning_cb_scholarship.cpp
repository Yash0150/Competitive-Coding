#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,x,y,mid;
	cin>>n>>m>>x>>y;
	long long low=1;
	long long high=n;
	while(high>=low){
		mid=low+(high-low)/2;
		long long M=(n-mid)*y+m;
		long long X=M-(mid*x);
		if(X>x){
			low=mid+1;	
		}
		else if((X>=0 && X<=x) || (low==high)){
			cout<<mid;
			break;
		}
		if(X<0){
			high=mid-1;
		}
	}
}
