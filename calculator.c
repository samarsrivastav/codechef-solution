// #include <stdio.h>
// int main(){
//     int a,digit=0,rev=0;
//     printf("enter the number \n");
//     scanf("%d", &a);
//     int num=a;
// while(num!=0){ //num>0 //696 //69 //6
//     digit=num%10; //digit=6 //9 //6
//     rev=10*rev+digit; //6 //69 696
//     num=num/10; //69 //6 0 sort(arr,arr+n)
// }
// if(a==rev){
//     printf("yes ");
// }
// else{
//     printf("no ");
// }
// printf(" \trev=%d",rev);
// }

#include <stdio.h>
int main()
{
    int num;
    printf("enter the nnumbre \n");
    scanf("%d", &num);
    // int n=num-1;
    int fib[num];
    if (num==1)
    {
        fib[0]=0;
    }
    else if (num==2)
    {
        fib[0]=0;
        fib[1]=1;
    }
    else{
        fib[num]=num;
    }

     printf("%d", fib);

     return 0;
}