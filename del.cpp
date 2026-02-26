#include <iostream>
using namespace std;

int main(){
    int sz = 9;
    int arr[sz] = {1,2,3,4,5,6,7,8,9};
    int pos;

    cout<<"Enter the index number to delete that value: ";
    cin>>pos;

    for(int i=pos ; i<sz-1 ; i++){
        arr[i] = arr[i+1];
    }

    for(int i=0 ; i<sz-1 ; i++){
        cout<<arr[i]<<endl;
    }
}