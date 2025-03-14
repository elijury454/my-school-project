#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    vector<string> classes = {"Math", "Science", "English", "History"};
    int grade;
    for (const auto &class : classes) {
        if (class == "Math") {
            cout << "You scored a perfect 10 in Math." << endl;
        } else if (class == "Science") {
            cout << "You scored an average of 8 out of 10 in Science." << endl;
        } else if (class == "English") {
            cout << "You scored a good grade in English, but you could do better." << endl;
        } else if (class == "History") {
            cout << "You scored a decent grade in History, but you could do better." << endl;
        }
    }
}
