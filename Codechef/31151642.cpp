#include <bits/stdc++.h>
# define mod 1000000007
using namespace std;
typedef long long int ll;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        ll sum=0;
        for(int i=n-2;i>=0;i--){
            if((arr[i]-(n-i-1))>=0)arr[i]-=(n-i-1);
            else arr[i]=0;
            
        }
        // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        // cout<<endl;
        for(int i=0;i<n;i++){sum=(sum+arr[i])%mod;}
        
        cout<<sum%mod<<endl;
        
    }
    
    
    
}