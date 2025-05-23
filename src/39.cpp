#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        int element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        if (element <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            return 1;
        }
    }

    cout << "Elements entered successfully." << endl;

    return 0;
}
