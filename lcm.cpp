#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int k;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin >> b;
    for(k=max(a,b); k<=a*b ; k++){
        if(k%a==0 && k%b==0){
            cout<<"LCM of a and b is "  << k <<endl;
            break;
        }
    }
    return 0;
}
