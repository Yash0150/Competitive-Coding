#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int n;
	cin>>n;
	int hex=0,bin=0, j=1;
	for(int i=n ;i>0; i/=8){
		hex+=(i%8)*j;
		j*=10;
        }
	cout<<hex;
	
}
