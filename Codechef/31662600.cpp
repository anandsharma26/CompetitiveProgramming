#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>m>>k;
        int arr[n][k];
        int freq[n][m];
        memset(freq,0,sizeof freq);
        for(int i=0;i<n;i++){for(int j=0;j<k;j++){cin>>arr[i][j];}}
        
        int out[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                freq[i][arr[i][j]-1]++;
            }
        }
        
         
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<freq[i][j]<<" ";}cout<<endl;}
        
        
        for(int i=0;i<n;i++){
            int max_index=0;
            int max_option=0;
            for(int j=0;j<m;j++){
                if(freq[i][j]>max_option){
                    max_option=freq[i][j];
                    max_index=j+1;
                }
            }
            out[i]=max_index;
            
        }
      
        
        
        for(int i=0;i<n;i++){cout<<out[i]<<" ";}
        cout<<endl;
    }
    
}