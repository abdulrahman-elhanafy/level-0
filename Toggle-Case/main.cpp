#include <iostream>
using namespace std;
int main() {
    char X;
    cin >> X;

    if (X >= 'a' && X <= 'z') {
        X = X -32;
        cout << X;
    }
    else if (X >= 'A' && X <= 'Z') {
        X =X + 32;
    cout << X;
    }
    return 0;
}