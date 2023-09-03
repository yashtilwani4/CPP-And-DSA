#include<iostream>
using namespace std;

int main(){
    // declare a integer type variable
    // int age;
    // Print enter the age
    // cout << "Enter The age" << endl;
    // take input into age variable
    //  cin>>age;
    // if condition
    // if (age>=18){
    //     cout<<"You can vote"<<endl;    
    // }
    // else{
    // cout<<"you cannot vote"<<endl;
    // }

    int marks;
    cin>>marks;

    // Nested if-else

    if(marks>=90){
        cout<<"A grade";
    }
    else{
        if(marks>=80){
            cout<<"B Grade";
        }
        else{
            if(marks>=60){
            cout<<"C Grade";
        }
        else{
            if(marks>=40){
            cout<<"D Grade";
            }
        else{
            cout<<"F Grade";
        }
        }
    }
} 
// if-elseif-else

    // if(marks>=90){
    //     cout<<"A";  
    // }
    // else if (marks>=80){
    //     cout<<"B";
    // }
    // else if (marks>=60){
    //     cout<<"C";
    // }
    // else if (marks>=40){
    //     cout<<"D";
    // }
    // else {
    //     cout<<"F";
    // }

    int bronum;
    cin>>bronum;

    if(bronum==0)
    {
    cout<<"Baat Ban Jayegi";
    }
    else
    {
        cout<<"Baat Nahi Banegi";
    }

}
