

    /*
    // Sample code to perform I/O:
     
    cin >> name;                            // Reading input from STDIN
    cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
     
    // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
    */
     
    // Write your code here
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define endl "\n"
     
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ll t,x,m,b;
        cin>>t;
        //string s;
        while(t--)
        {
          cin>>x;
          
          if(x==1)
          {
              cout<<"1"<<endl;
              continue;
          }
          b=log2(x);
          cout<<"."<<b<<endl;
          if(b%2==0)
          {
              m=x-(ll)pow(2,b/2)+1;
          }else {
              b=b/2+1;
              m=x-(x/(ll)pow(2,b));
          }
          
          
            cout<<m;
            
            cout<<endl;     
        }
        
        return 0;
    }


