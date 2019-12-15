#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int sum=0;int j=1;
    for(int i=(s.size())-1 ;i>=0; i--){
	int k= s[i]-'0' ;
        sum+=k*j;
        j*=2;
    }
	
    cout<<sum<<endl;
	return 0;
}
