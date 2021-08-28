#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int number, workhours;
    double paidhours;

    cout << "";
    cin >> number;

    cout << "";
    cin >> workhours;

    cout << "";
    cin >> paidhours;

    double finalsalary = paidhours * workhours;

    cout << "NUMBER = " << number << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << finalsalary << endl;

    return 0;
}