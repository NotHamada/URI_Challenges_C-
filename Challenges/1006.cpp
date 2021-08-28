#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float n1, n2, n3;

    cout << "";
    cin >> n1;

    cout << "";
    cin >> n2;

    cout << "";
    cin >> n3;

    float average = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;

    return 0;
}