#include <iostream>
using namespace std;

int prime(int n) {
    int count = 0;

    if (n < 2) {
        cout << "not prime" << endl;
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 0) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }

    return 0;
}

int main() {
    prime(7);
    prime(8);
    return 0;
}