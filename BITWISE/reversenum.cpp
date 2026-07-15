// here we can reverse the given number also use here long long bitwise operator as we have to enter large numbers which take to much spacessss
#include <iostream>
using namespace std;
int main(){
    long long int n=785;
    
    int reverse=0;

    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n/=10;

    return 0;

}//hello