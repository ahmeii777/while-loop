#include <iostream>
using namespace std;

int main() {
    int marks, count = 0;
    int sum = 0;

    cout << "Enter marks (-1 to stop): ";
    cin >> marks;

    while (marks != -1) {
        sum += marks;
        count++;
        cin >> marks;
    }

    if (count > 0) {
        double average = (double)sum / count;
        cout << "Average = " << average << endl;
    } else {
        cout << "No marks entered." << endl;
    }

    return 0;
}
