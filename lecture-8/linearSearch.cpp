#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++) {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main () {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n ; i++){
        cout << "Value of index " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    int key;
    cout << "Please Provide the key : " ;
    cin >> key;
    cout << "The number is in the index of " << linearSearch(arr,n,key) << endl;
    return 0;
}