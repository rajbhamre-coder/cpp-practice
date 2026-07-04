//so here m defining the function 
int minoftwo(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
    
}

// now we call the defined function whenever we want to dec the retundancy of the code and make it more readable
#include <iostream>
using namespace std;
int main(){
    cout<<minoftwo(5567,7869)<<endl;
    return 0;
}