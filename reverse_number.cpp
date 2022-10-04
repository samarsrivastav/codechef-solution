#include <iostream>

using namespace std;

int main()
{
    int t,n,r;
    cin>>t;
    while(t--){
        r=0;
        cin>>n;
        while(n>0){

            int lastdigit=n%10;
            r=r*10+lastdigit;
            n=n/10;

        }
        cout<<r<<endl;
    }

    return 0;
}
