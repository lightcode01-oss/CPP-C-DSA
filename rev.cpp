#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n], rev[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }

    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++) {
        cout << rev[i] << " ";
    }

    return 0;
}
