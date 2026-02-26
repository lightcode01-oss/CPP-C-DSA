#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Element is present in the array";
    else
        cout << "Element is NOT present in the array";

    return 0;
}
 