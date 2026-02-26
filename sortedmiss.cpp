#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i] != start + i) {
            cout << "Missing element is: " << start + i;
            return 0;
        }
    }

    cout << "No missing element found";
    return 0;
}
