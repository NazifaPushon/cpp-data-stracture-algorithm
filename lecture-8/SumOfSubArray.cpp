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

    int current = 0;

    for(int i = 0; i < n;i++){
        current  = 0;
        for(int j = i;j < n;j++){
            current += array[j];
            cout << current << endl;
        }
    }
    cout << endl;
    return 0;
}