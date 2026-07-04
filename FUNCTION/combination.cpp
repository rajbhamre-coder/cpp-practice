//here we find the combination n and r nCr.
#include<iostream>
using namespace std;
 
int factn(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    } return fact;
}


int nCr(int n,int r){

    int num=factn(n);
    int rum=factn(r);
    int den=factn(n-r);
    int result=num/(rum*den);
    cout<<result<<endl;
    return 0;
}


//now we will call it lesgooo
int main(){
    nCr(4,6);
    nCr(9,3);
    return 0;
}