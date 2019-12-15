#include<bits/stdc++.h>
using namespace std;
int A[1000];

int multiply(int x, int resize){
	int carry=0;
	for(int i=0; i<resize; i++){
		int product=A[i]*x + carry;
		A[i]=product%10;
		carry=product/10;
	}
	while(carry){
		A[resize]=carry%10;
		resize++;
		carry/=10;
	}
	return resize;
}

int factorial(int n){
	int resize=1;
	A[0]=1;
	for(int x=2; x<=n; x++){
		resize=multiply(x,resize);
	}
	for(int i=resize-1; i>=0; i--){
		cout<<A[i];
	}
}

int main(){
	int n;
	cin>>n;
	factorial(n);
}