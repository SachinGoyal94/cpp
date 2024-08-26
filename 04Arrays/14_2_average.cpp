//Method 1

#include <iostream>

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Number of elements must be a positive integer." << endl;
        return 1;
    }

    cout << "Enter " << n << " numbers:" << endl;

    for (int i = 0; i < n; i++) {
        double num;
        cin >> num;
        sum += num;
    }

    double average = sum / n;

    cout << "The average of the " << n << " numbers is: " << average << endl;

    return 0;
}
