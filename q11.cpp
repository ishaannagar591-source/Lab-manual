#include <iostream>
using namespace std;

int main() {
    int items;
    float price, total;
    cin >> items >> price;
    total = items * price;
    if(items > 1000)
        total = total - (total * 0.10);
    cout << total;
    return 0;
}
