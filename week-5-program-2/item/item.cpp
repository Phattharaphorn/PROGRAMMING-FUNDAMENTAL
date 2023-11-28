#include <iostream>
using namespace std;
int main() {
    int gcd(int a, int b);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}
int gcd(int a, int b) {
    // a >= b
    if (b == 0) return a;
    if (a >= b) return gcd(b, a - (((int)(a / b) * b)));
    return gcd(b, a);
}