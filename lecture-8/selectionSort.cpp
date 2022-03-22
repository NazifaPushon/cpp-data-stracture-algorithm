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

    for(int i = 0;i<n-1;i++){
        for(int j = i+1; j<n;j++){
            if(array[j] < array[i]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    cout << "Sorted Array : " ; 
    for(int i = 0; i < n ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}