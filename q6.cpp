#include <iostream>
using namespace std;

int main() {
    float salary, bonus, net;
    cin >> salary;
    bonus = salary * 0.12;
    net = salary + bonus;
    cout << "Net Salary = " << net;
    return 0;
}
