#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num < 0) {
        cout << "Error: Negative number" << endl;
        return 1;
    }
    cout << num << endl;
    return 0;
}
