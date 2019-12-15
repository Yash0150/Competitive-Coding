#include<bits/stdc++.h>
using namespace std;
int main() {
    vector <int> v;
    int sum=0;
    int num=0;
    for(int i=0; sum>=0; i++){
        int a;
        cin>>a;
        v.push_back(a);
        sum+=a;
        num++;
    }
    for(int i=0; i<num-1; i++){
        cout<<v[i]<<endl;
    }
	return 0;
}
