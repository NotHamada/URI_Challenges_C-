#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float n1, n2;

    cout << "";
    cin >> n1;

    cout << "";
    cin >> n2;

    float average = ((n1 * 3.5) + (n2 * 7.5)) / 11;

    cout << fixed << setprecision(5) << "MEDIA = " << average << endl;

    return 0;
}