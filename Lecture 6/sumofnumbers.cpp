#include<iostream>
using namespace std;


int getsum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int ans = getsum(n);

    cout<<"sum upto"<<n<<"is"<<ans<<endl;
    return 0;
}