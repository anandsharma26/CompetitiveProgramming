#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)cin>>arr[i];
        
        ll new_arr[n];
        for(ll i=0;i<n;i++){
            if(arr[i]%2==1||arr[i]%2==-1){new_arr[i]=0;}
            else if(arr[i]%4==0){new_arr[i]=4;}
            else{new_arr[i]=1;}
        }
        //for(int i=0;i<n;i++)cout<<new_arr[i]<<" ";
        //cout<<endl;
        ll result=0;
        ll cumsum=0;
        unordered_map<ll,ll> sum;
        
        
        
        for(ll i=0;i<n;i++){
            cumsum+=new_arr[i];
            if(cumsum==1){;result++;}
            if(sum.find(cumsum-1)!=sum.end()){

                result+=(sum[cumsum-1]);
            }
            
            sum[cumsum]++;
        }
        //cout<<result<<endl;
        ll total=(n*(n+1))/2;
        //cout<<total<<endl;
        ll final=total-result;
        cout<<final<<endl;
       
    }
    
}