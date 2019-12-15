#include<iostream>
using namespace std;
int main() {
    int k=1;
    while(k){
        char c;
        cin>>c;
        if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%'){
            int a,b;
            cin>>a>>b;
            switch(c){
                case '+' : cout<<(a+b)<<endl;
			   break;
                case '-' : cout<<(a-b)<<endl;
			   break;
                case '*' : cout<<(a*b)<<endl;
			   break;
                case '/' : cout<<(a/b)<<endl;
			   break;
                case '%' : cout<<(a%b)<<endl;
			   break;
            }
        }
        else if(c=='x' || c=='X'){
            break;
        }
        else{
            cout<<"Invalid operation. Try again."<<endl;
        }
        
    }
	return 0;
}
