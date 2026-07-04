// now we will implement the factorial of n by using recursion lets define it 
long long factorialn(int n){
    long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}


//so now we will call it

#include <iostream>
using namespace std;
int main(){
    cout<<factorialn(4)<<endl;
    cout<<factorialn(9)<<endl;
}