// to check if a number is prime or not?
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your nuber "<<endl;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
if (count==0){
    cout<<"the number is prime"<<endl;
    } else{
        cout<<"the number is not prime"<<endl;
    }
}