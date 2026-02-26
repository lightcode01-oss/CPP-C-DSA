#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left[n], right[n];
    int leftIndex = 0, rightIndex = 0;

    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        if (i < mid) {
            left[leftIndex++] = arr[i];
        } else {
            right[rightIndex++] = arr[i];
        }
    }

    cout << "Left array elements:\n";
    for (int i = 0; i < leftIndex; i++) {
        cout << left[i] << " ";
    }
    cout << endl;

    cout << "Right array elements:\n";
    for (int i = 0; i < rightIndex; i++) {
        cout << right[i] << " ";
    }    cout << endl;

    return 0;   
}