#include <iostream>
using namespace std;

int main() {
    int item, qty;
    float price, total, discount;
    cin >> item >> qty >> price;
    total = qty * price;
    discount = total * 0.20;
    cout << "Final Amount = " << total - discount;
    return 0;
}
