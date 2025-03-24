#include <iostream>
using namespace std;

int main() {
    int height = 0;
    int width = 0;
    cout << "Enter the dimensions of the rectangle: ";
    cin >> height >> width;
    
    if (height <= 0 || width <= 0) {
        cout << "Invalid input. Rectangle dimensions must be positive integers." << endl;
    } else {
        cout << "The area of the rectangle is: " << height * width << " square units." << endl;
    }
    
    return 0;
}
