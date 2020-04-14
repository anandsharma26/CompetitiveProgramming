#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int dist=0;
        int prev=-6;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                dist=i-prev;
                prev=i;
                if(dist<6){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
        
    }
    
    
    
}