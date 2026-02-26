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


    int midindex ;
    cout<<"Enter the mid index : ";
    cin>>midindex;
    cout<<"enter the element to be inserted at mid index : ";
    int element;
    cin>>element;
    for(int i=n-1;i>=midindex;i--){
        arr[i+1]=arr[i];
    }
    arr[midindex]=element;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}