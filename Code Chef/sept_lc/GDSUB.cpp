#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n=4,k=3;
	int set = (1 << k) - 1;
	int limit = (1 << n);
	while (set < limit) {
	    // Gosper's hack:
    	int c = set & -set;
    	int r = set + c;
    	set = (((r^set) >> 2) / c) | r;
    	cout<<set<<" ";
	}
}

