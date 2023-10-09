#include<iostream>
using namespace std;

int getevensum(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int ans = getevensum(n);

    cout<<"even sum upto"<<n<<"is"<<ans<<endl;
    return 0;
}