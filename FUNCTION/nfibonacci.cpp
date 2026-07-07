#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0, b = 1, c = 0, i = 3;

    if (n >= 1)
        cout << a << " ";

    if (n >= 2)
        cout << b << " ";

    while (i <= n) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        i++;
    }

    return c;
}

int main() {

    cout << "Fibonacci series: ";
    fibonacci(10);
    return 0;
}