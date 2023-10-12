#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
}
cout<<endl;
}

void inc(int arr[], int size){
    arr[0]=arr[0]+10;

    printArray(arr,size);
}
bool find(int arr[],int size,int key){

    //linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        return true;
    }

    //not present
    return false;
}

int main(){
    //declaration of arrays

    // int array[5];
    // char array[106];
    // bool array[23];

    //initialization of arrays

    // int arr[]={2,3,2,3,4};
    // int brr[5]={2,3,2,3,4};
    // int crr[10]={2,3,2,3,4};
    // int drr[4]={2,3,2,3,4}; //error 
    // cout<<"array initialised successfully"<<endl;
    
    // int arr[]={1,3,5,7,9};

    // //printing all values
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" "; 
    // }
    // int arr[10];

    // cout<<"Enter the input values in array"<<endl;

    // for (int i=0;i<10;i++){
    //     // int n;
    //     // cin>>n;
    //     // arr[i]=n;
    //     cin>>arr[i];
    // }

    // //printing
    // coutt<<"printing the values in array"<<endl;
    //  for (int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    //  }

//     int arr[500];

//     int n;
//     cout<<"how many numbers you want to add in array"<<endl;\

//     cin>>n;

//     cout<<"enter the numbers"<<endl;
//     for (int i=0;i<10;i++){
//          cin>>arr[i];
//     }

//     //printing doubles
//     cout<<"printing the double values in array";
//     for (int i=0;i<n;i++){
//          cout<<2*arr[i]<<" ";
//     }

     // int arr[5]={1,3,5,7,9};

     // for(int i=0;i<5;i++){
     //      arr[i]=1;
     // }

     // for(int i=0;i<5;i++){
     //      cout<<arr[i]<<" ";
     // }

    //  int arr[10];
    //  //memset(arr,1,arr+1);

    //  for(int i=0;i<10;i++){
    //        cout<<arr[i]<<" ";
    //  }


//     int arr[]={5,6};
//     int size=2;
//     inc(arr,size);
// // pass by reference
//     printArray(arr,size);

// int arr[5] = {1,3,5,7,8};
// int size = 5;

// cout<<"Enter the key to find"<<endl;
// int key;
// cin>>key;

// if(find(arr,size,key)){
//     cout<<"Found"<<endl;
// }
// else{
//     cout<<"not found"<<endl;
// }

// int arr[]={1,2,3,4,5,6,7,8};
// int size=8;

// int key=5;

// bool flag=0;
// //0 -> not found
// //1 -> found

// //linear search
// for(int i=0;i<size;i++){
//     if(arr[i]==key){
//         //found
//         flag=1;
//         break;   
//     }
// }

//     if(flag)
//         cout<<"Present"<<endl;
//     else
//         cout<<"Absent"<<endl;

//     return 0;

//counting 0s and 1s in arrays

// int arr[] = {0,1,0,1,0,1,0,1,1,0,0,0,0,1};

// int size = 14;

// int numZero = 0;
// int numOne = 0;

// for(int i=0;i<size;i++){
//     //if zero found, increment numzero
//     if(arr[i]==0){
//         numZero++;
//     }
//     //if one found, increment numone
//     if(arr[i]==1){
//         numOne++;
//     }
// }
// cout<<"Number of zeroes"<<numZero<<endl;
// cout<<"Number of ones"<<numOne<<endl;

// int arr[]={2,4,5,3,32,5,4,46,75};
// int size = 9; 
// //initialise the maxi variable with the
// //minimum possible integer value
// int maxi = INT_MIN;

// for(int i=0;i<size;i++){
//     if(arr[i]>maxi){
//         //found a number greater than maxi, update maxi
//         maxi=arr[i];
//     }
// }
//     cout<<"maximum number is "<<maxi<<endl;

// int arr[]={2,4,5,3,32,5,4,46,75};
// int size = 9; 
// //initialise the mini variable with the
// //maximum possible integer value
// int mini = INT_MAX;

// for(int i=0;i<size;i++){
//     if(arr[i]<maxi){
//         //found a number lesser than mini, update maxi
//         maxi=arr[i];
//     }
// }
//     cout<<"minimum number is "<<mini<<endl;


// Extreme Values


// int arr[8]={10,20,30,40,50,60,70,80};
// int size=7 ;

// int start=0;
// int end=size-1;

// while(start<=end){
//     if(start>end)
//         break;
//     if(start==end){
//         cout<<arr[start]<<" ";
//     }
//     else{
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";
//     }
//     // cout<<arr[start]<<" ";
//     // cout<<arr[end]<<" ";
//     start++;
//     end--;
// }

//Reversing Array
int arr[8]={10,20,30,40,50,60,70,80};
int size=8 ;

int start=0;
int end=size-1;

while(start<=end){

    //step 1:
    swap(arr[start],arr[end]);
    //step 2:
    start++;
    //step 3:
    end--;
}
 //printing array
 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 }
}