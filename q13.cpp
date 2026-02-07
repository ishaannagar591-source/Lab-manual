#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, r1, r2;
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    r1 = (-b + sqrt(d)) / (2*a);
    r2 = (-b - sqrt(d)) / (2*a);
    cout << r1 << " " << r2;
    return 0;
}
