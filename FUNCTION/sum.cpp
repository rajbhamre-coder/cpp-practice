// lets finf the sum of 1 to n but of various numbers bye using recursion
int sumn(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

//now we will call it 
#include <iostream>
using namespace std;

int main(){
    cout<<sumn(455)<<endl;
    cout<<sumn(90)<<endl;
    cout<<sumn(880)<<endl;
    return 0;
}