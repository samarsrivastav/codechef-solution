#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    while(t--){
        int l,k;
        cin>>l>>k;
        int ans1=l-k;
        if(l==k){
            cout<<0<<endl;
        }
        else if(ans1<k){
            cout<<1<<endl;
        }
        else if(ans1==k){
            cout<<0<<endl;
        }
        
        else if(ans1%k==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
        
    }
    
    return 0;
}
