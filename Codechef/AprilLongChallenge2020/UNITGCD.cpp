#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int days;
        if(n==1){
            cout<<"1\n"<<"1 "<<"1\n";
        }
       else{
           days=n/2;
           cout<<days<<"\n";
           for(int i=1;i<=n;i+=2){
           if(n%2==1&&i==1){cout<<"3 1 2 3\n";i+=1;}
            else{cout<<"2 "<<i<<" "<<i+1<<"\n";}
           
           }
       }
    }
    
    
    return 0;
}
