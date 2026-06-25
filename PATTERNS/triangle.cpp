//simple stars triangle 
#include <iostream>
using namespace std;
int main (){
    for (int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        } cout<<endl;
    }
// another program for triangle 
int n=5;
char ch='A';
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<ch;
    }
    ch++;
    cout<<endl;
}


//another program on this
int m=5;
for(int i=0;i<m;i++){
    char ch1='A';
    for(int j=0;j<i+1;j++){
        cout<<ch1;
        ch1++;
    }
    cout<<endl;
}
}