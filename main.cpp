#include <iostream>

using namespace std;

int main()
{
    int t,n,i,f;
    cin>>t;
    while(t--){
        f=1;
        cin>>n;
        for(i=n;i>=1;i--){

            f=f*i;

        }
        cout<<f<<endl;
    }

    return 0;
}
