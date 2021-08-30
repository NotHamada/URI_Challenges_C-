#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    char name[10];

    cout << "";
    cin >> name;

    double fixedsalary, sales;
    
    cout << "";
    cin >> fixedsalary;

    cout << "";
    cin >> sales;

    double extra = sales * 0.15;

    double finalsalary = fixedsalary + extra;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << finalsalary << endl;

    return 0;
}