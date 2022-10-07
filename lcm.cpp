#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin >> b;
    int hcf=__gcd(a,b);
    int lcm=(a*b)/hcf;
    cout<<"LCM of a and b is "  <<lcm<<endl;
    return 0;
}
