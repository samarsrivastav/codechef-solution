#include<iostream>
#include<math.h>
using namespace std;

// void update(int arr[], int n) {

//     cout << endl << "Inside the function" <<endl;
    
//     //updating array's first element
//     arr[0] = 120;

//     //printing the array
//     for(int i=0; i<3; i++) {
//         cout << arr[i] <<" ";
//     } cout<<endl;


//     cout << "Going back to main function" << endl;
// }


// int main() {

//     int arr[3] = {1,2,3};

//     update(arr, 3);

//     //printing the array
//     cout<< endl << "Printing in main function" << endl;
//     for(int i=0; i<3; i++) {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;

//     return 0;
// }



// bool search(int arr[], int size, int key){

// for(int i=0; i<size; i++){
//    if(arr[i] == key){
//        return 1;
//    }
// }
// return 0;
// }



// int main(){
//     int arr[10] = {8, 9, 13, -5, 7, 1, 0, 4, 2, 10};
//     int key;
//     cin>>key;

//     bool found = search(arr, 10, key);
    
//     if(found){
//         cout<<"key is present "<<endl;
//     }

//     else{
//         cout<<"key is absent "<<endl;
//     }
// return 0;

// }



// int getmax(int num[] , int n ){
//     int max = INT16_MIN;

//     for (int i=0; i<n; i++){
//         if (num[i] > max){
//             num[i] = max;
//         }
//     }
//     return max;
// }

// int getmin(int num[] , int n ){
//     int min = INT16_MAX;

//     for (int i=0; i<n; i++){
//         if (num[i] < min){
//             num[i] = min;
//         }
//     }
//     return min;
// }

// int main(){
//     int size;
//     cin>>size;

//     int num[100];

//     for(int i=0; i<size; i++){
//         cin>>num[i];
//     }

//     cout<<"max value is "<< getmax(num,size)<<endl;
//     cout<<"min value is "<< getmin(num,size)<<endl;

//     return 0;

// }




// void reverse(int arr[], int n) {

//     int start = 0;
//     int end = n-1;

//     while(start<=end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n) {
    
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {

//     int arr[6] = {1,4,0,5,-2,15};
//     int brr[5] = {2,6,3,9,4};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);


//     return 0;
// }


// int sum(int num[], int n){
// int ans = 0;

// for(int i=0; i<n; i++){
//    ans = ans + num[i];
// }
// return ans;
// }

// int main(){
//     int size;
//     cin>>size;

//     int num[100];
//     for (int i=0; i<size; i++){
//         cin>>num[i];
//     }
//     cout<<"Sum is "<< sum(num,size)<<endl;
// }
int main(){
int t;
	cin>>t;
	while(t--){
	    int n,x,ans,ans1;
	    cin>>n>>x;
	    
	    ans = x*abs((pow(2,n-1) - 1));
	    ans1 = ans + x;
	    
	    cout<<ans1<<endl;
	}
	return 0;

}