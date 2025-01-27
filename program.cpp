#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cin >> num;

    if (num < 0) {
        cout << "Error: Negative number" << endl;
        return 1;
    }

    cout << "Number: " << num << endl;
    cout << "Fibonacci: " << fibonacci(num) << endl;

    return 0;
}
