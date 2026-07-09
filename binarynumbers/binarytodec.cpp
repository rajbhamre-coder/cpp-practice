#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
    int ans = 0;
    int pow = 1;

    while (n > 0) {
        int rem = n % 10;   // Last binary digit
        n /= 10;            // Remove last digit
        ans += rem * pow;   // Add its decimal value
        pow *= 2;           // Next power of 2
    }

    return ans;
}

int main() {
    int n= 101010;
    cout << "Decimal is equal to " << binaryToDecimal(n);

    return 0;
}