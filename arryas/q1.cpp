//in this we have to find the smallest and largest number in the array;
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int num[]={5,15,46,54,-4,-22};
    int size=sizeof(num)/sizeof(num[0]);//here were dividing it with the size of first element which 4bytes so tht 6*4=24 bytes gets divided by tht 4 nd will give us the tottal size which is 6 
    
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if (num[i]<smallest){
            smallest=num[i];
        }
        if (num[i]>largest){
            largest=num[i];
        }
    }
    cout<<"Smallest number is: "<<smallest<<endl;
    cout<<"Largest number is: "<<largest<<endl;
    return 0;
}