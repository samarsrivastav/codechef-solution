#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int a[k]={};
	    for(int i=0;i<k;i++){
	        cin>>a[i];
	    }
	    
	    int maxi=-999999;
	    int ans=0;
	    for(int i=0;i<k;i++){
	        if(a[i]>maxi){
	            ans=i;
	            maxi=a[i];
	        }
	    }
	    if(ans==0){
	        cout<<-1;
	    }
	    else{
	        cout<<ans<<endl;
	    for(int i=0;i<ans;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    cout<<k-ans<<endl;
	    for(int i=ans;i<k;i++){
	        cout<<a[i]<<" ";
	    }
	   }
	    cout<<endl;
	    
	}
	return 0;
}
