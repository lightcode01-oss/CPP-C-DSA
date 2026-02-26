#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    cout<<"Largest element is: "<<large;
    return 0;
}