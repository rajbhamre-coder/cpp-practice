// question on if else loop "that youre eligible to vote or not"
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age__";
    cin>>age;
    if (age>=18){
        cout<<"youre eligible to vote dear"<<endl;
    }
    else{
        cout<<"youre not eligible to vote dear"<<endl;
    }
    return 0;
}