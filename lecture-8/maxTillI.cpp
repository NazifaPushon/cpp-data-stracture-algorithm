#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int mx = -1999999;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n ; i++){
        cout << "Value of index " << i << " : ";
        cin >> array[i];
        cout << endl;
    }

    for(int i = 0;i<n;i++){
        mx = max(mx,array[i]);
        cout << mx << endl;
    }
    return 0;
}