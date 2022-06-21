
#include <iostream>
using namespace std;

int rotate(int arr[], int d,int n){
        int temp[d];
        for(int i = 0;  i < d; i++){
            temp[i] = arr[i];
        }
        
        int rest[n-d];
        for(int i = 0; i < n-d; i++){
            rest[i] = arr[d+i];
        }
        
        
        for(int i = 0 ; i < n-d; i++){
            arr[i] = rest[i];
        }
        
        for(int i = 0;  i < d; i++){
           arr[n-d+i] = temp[i];
        }
        
        for(int i=0; i < n; i++){
            cout << arr[i] << endl;
        }
    }
