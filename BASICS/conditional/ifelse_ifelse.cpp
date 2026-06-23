// now question on if else ,ef else that "Grading system"
#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks__";
    cin>>marks;
    if (marks>=90){
        cout<<"your grade is A"<<endl;
    } else if (marks>=80){
        cout<<"your grade is B"<<endl;
    } else if (marks>=70){
        cout<<"your grade is C"<<endl;
    } else if (marks>=60){
        cout<<"your grade is D"<<endl;
    } else if (marks>=50){
        cout<<"your grade is E"<<endl;
    } else {
        cout<<"your grade is FAHHHHHHH"<<endl;
    }
    return 0;
}