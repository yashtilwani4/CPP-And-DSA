#include<iostream>
using namespace std;
//solid rectangle

// * * * * *
// * * * * *
// * * * * *

int main(){
//         for(int row=0; row<3; row=row+1)
//     {
         
//         for(int col=0; col<5; col=col+1)
//         {
//             cout<<" * ";
//         }
//         cout<<endl;
// }


    //Square

    // * * * * 
    // * * * *
    // * * * *
    // * * * *

    
      //outer loop - row observe
    // int n;
    // cin>>n;
    // for (int row=0;row<n;row=row+1){
    //     //inner loop - column observe
    //     for(int col=0;col<n;col=col+1){
    //         cout<<" * ";
    //     }
    //     cout << endl;
    // }

    //Hollow Rectangle
    // * * * * *
    // *       *
    // * * * * *
//     int rowcount,colcount;
//     cin>>rowcount;
//     cin>>colcount;

//     //Hollow Rectangle
//     for(int row=0;row<rowcount;row+=1){
//         //first row or last row -> print 5 *
//         if(row==0 || row==rowcount-1){
//             for(int col=0;col<colcount;col++){
//                 cout<<" * ";
//             }
//         }
//         else{
//             //remaining middle rows
//             //first star
//             cout<<" * ";
//             //spaces
//             for (int i=0;i<colcount-2;i=i+1){
//                 cout<<"   ";
//             }
//             //last star
//             cout<<" * ";
//         }
//         cout<<endl;
// }

//Half Pyramid
// *
// * *
// * * *
// * * * *
// * * * * * 
// * * * * * *

//number of rows -> n
// int n;
// cin>>n;

// for(int row=0; row<n;row=row+1){
//     for(int col=0;col<row+1;col=col+1){
//         cout<<" * ";
//     }
//     cout<<endl;
// }

//Inverted Half Pyramid
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

// int n;
// cin>>n;

// for(int row=0; row<n;row=row+1){
//     for(int col=0;col<n-row;col=col+1){
//         cout<<" * ";
//     }
//     cout<<endl;
// }

//Numeric Half Pyramid
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

//number of rows -> n  
// int n;
// cin>>n;
// for(int row=0;row<n;row=row+1)
// {
//     for(int col=0;col<row+1;col=col+1){
//         cout<<col+1;
//     }
//     cout<<endl;
// }

//inverted numeric half pyramid
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

int n;
cin>>n;
for(int row=0;row<n;row=row+1)
{
    for(int col=0;col<n-row;col=col+1){
        cout<<col+1;
    }
    cout<<endl;
}

//Full Pyramid
//      *
//     * *
//    * * *
//   * * * *
//  * * * * * 
// * * * * * *

//Inverted full Pyramid
// * * * * * *
//  * * * * *
//   * * * * 
//    * * * 
//     * *
//      *

//Numeric Full Pyramid
//         1
//       2 3 2
//     3 4 5 4 3   
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5 
 }