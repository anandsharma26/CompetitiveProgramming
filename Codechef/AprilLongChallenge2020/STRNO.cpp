#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        ll arr[1000000];
        memset(arr,0,sizeof arr);
        ll omega=0;
        ll i=0;
        while(x%2==0){
              arr[i++]=2;
              x=x/2;
        }
        
        for (ll j=3;j<sqrt(x);j=j+2){
            
            while(x%j==0){
                arr[i++]=j;
                x=x/j;
            }
        }
        
        if(x>2)arr[i++]=x;
        
        
        if(i>=k)cout<<"1"<<endl;
        else cout<<"0"<<endl;
        
    }
    
}
