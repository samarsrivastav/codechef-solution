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
    int num1,num2,fib;
    printf("Enter the number inwhich you want to perform operation\n");
    scanf("%d%d",&num1,&num2);
    char c;
    printf("Enter the operation which you want to perform operation\n");
    scanf("%c",&c);
    if(c=='+'){
        fib=num1+num2;
    }
    if(c=='-'){
        fib=num1-num2;
    }
    if(c=='*'){
        fib=num1*num2;
    }
    if(c=='/'){
        fib=num1/num2;
    }
     printf("%d", fib);

     return 0;
}
