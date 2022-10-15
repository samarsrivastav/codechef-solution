#include <iostream>

using namespace std;

int main()
{
    int T;
    int L;
    int R;

    int y=0;

    cin>>T;
    while(T--){
        cin>>L>>R;

            for(int k= L ; k<=R ; k++){
                if(k%10==2 || k%10==3 || k%10==9){
                    y++;
                }
            }cout<<y<<endl;


    }
    return 0;
}
