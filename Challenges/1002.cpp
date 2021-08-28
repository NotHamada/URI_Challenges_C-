#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    double R;
    double pi = 3.14159;

    cout << "";
    cin >> R;

    double area = pi * R * R;

    cout << fixed << setprecision(4) << "A=" << area << endl;

    return 0;
}