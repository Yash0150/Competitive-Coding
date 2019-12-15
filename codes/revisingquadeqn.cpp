#include<bits/stdc++.h>
using namespace std;

int main(void) {
	vector <int> v;
    for(int i=0; i<3; i++){
            int a;
            cin>>a;
            v.push_back(a);
    }
    int x=v[1]*v[1];
    int y=x-4*v[0]*v[2];
    if(y<0){
        cout<<"Imaginary"<<endl;
    }
    else if(y==0){
        cout<<"Real and Equal"<<endl;
    }
    else{
        int r1=((-v[1])+pow(y,.5))/(2*v[0]);
        int r2=((-v[1])-pow(y,.5))/(2*v[0]);
        cout<<"Real and Distinct"<<endl;
        cout<<r2<<" "<<r1<<endl;
    }
    
}
