#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n ; i++){
        cout << "Value of index " << i << " : ";
        cin >> array[i];
        cout << endl;
    }

    for(int i = 0; i < n ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;

    int counter = 1;
    while(counter < n){
        for(int i = 0; i<n-counter;i++){
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        counter++;
    }
    cout << "Sorted Array : " ; 
    for(int i = 0; i < n ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}