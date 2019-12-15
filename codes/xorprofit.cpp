#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector <int> v;
	int a,b;
	cin>>a>>b;
	int max= (a^a);
	if(max< (b^b)){
		max= (b^b);
	}
	if(max< (a^b)){
		max= (a^b);
	}
	cout<<max;
}
