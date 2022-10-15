#include <iostream>
#include<algorithm>

using namespace std;

void printmin(int arr[5]);

int main()
{
     int arr1[5] = { 30, 10, 20, 40, 50 };
     int arr2[5] = { 5, 15, 25, 35, 45 };
     printmin(arr1);//passing array to function
     printmin(arr2);
    return 0;
}

void  printmin(int arr[5])
{
    int min;
     sort(arr,arr+5);
     min=arr[4];
       
        cout<< "Minimum element is: "<< min <<"\n";
}
