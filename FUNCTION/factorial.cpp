// now we will implement the factorial of n by using recursion lets define it 
int factorialn(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    } return fact;
}



//so now we will call it

#include <iostream>
using namespace std;
int main(){
    cout<<factorialn(456)<<endl;
    cout<<factorialn(90)<<endl;
    return 0;
}