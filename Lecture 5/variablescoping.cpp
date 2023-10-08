#include<iostream>
using namespace std;

int globalbracket = 420;

int main() {

    //variable scoping

    //declaration
    int a;
    //initialization
    int b = 5;
    //updation
    b = 10;
    cout << globalbracket << endl;
    if(true){
        int b = 15;

        cout << b << endl;
        cout << globalbracket << endl;
    }
cout << b << endl;
}
    