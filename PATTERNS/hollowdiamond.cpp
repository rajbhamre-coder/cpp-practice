// here we will create a hollow diamond star pattern for which we have to divide the code in two parts top nd bottom;
 #include <iostream>
 using namespace std;
 // top half of the diamond
 int main(){
        int n=4;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<"*";
            if(i>0){
                for(int j=0;j<2*i-1;j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;
        }
        // bottom half of the diamond
        for(int i=0;i<=n-2;i++){
            for(int j=0;j<i+1 ;j++){
                cout<<" ";
            }cout<<"*";
            if (i!=n-2){
                for(int j=0;j<2*(n-i)-5;j++){
                    cout<<" ";
                }cout<<"*";
            }
            cout<<endl;
        }
 }