#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int element;
    cout << "Enter element to insert at first index: ";
    cin >> element;

    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;

    cout << "Array after inserting element at first index:\n";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
