#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    cout << fixed;

    double ft = 30.48;
    double a;

    cin >> a;
    cout.precision(1);
    cout << a * ft << endl;

    return 0;
}