#include <iostream>//taking output from array by using loops 
using namespace std;


int main() {

    int arr2[5]={};
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }
    return 0;
}
