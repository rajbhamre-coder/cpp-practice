#include <iostream>
using namespace std;

int main() {
    int n=88;

    bool found = false;

    for (int i = 1; i <= n; i *= 2) {
        if (i == n) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Yes, it is a power of 2";
    else
        cout << "No, it is not a power of 2";
}