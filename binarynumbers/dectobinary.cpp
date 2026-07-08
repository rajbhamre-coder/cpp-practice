#include <iostream>
using namespace std;

int dectobinary(int n){
    int ans = 0, power = 1;

    while(n > 0){
        int rem = n % 2;
        n /= 2;
        ans += (rem * power);//my mistake in this code tht i have nott applied the brackets nd it kept doing.
        power *= 10;
    }

    return ans;
}

int main(){
    int n=67;

    cout << "Binary is equal to " << dectobinary(n) << endl;

    return 0;
}