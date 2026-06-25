// so here we have the code for reverse triangle pattern
#include <iostream>
using namespace std;
int main(){
int n=7;
for(int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){
        cout<<j<<" ";
    }
    cout<<endl;
}


// another program on this floyds triangle
int m=7;
int num=1;
for(int i=0;i<m;i++){
    for(int j=0;j<i+1;j++){
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}
}