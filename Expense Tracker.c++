#include <iostream>
using namespace std;

int main() {

    double expense;
    double total = 0;

    int count;

    cout << "How many expenses: ";
    cin >> count;

    for(int i = 0; i < count; i++) {

        cin >> expense;

        total += expense;
    }

    cout << "Total Expenses: "
         << total
         << endl;

    return 0;
}
