#include <iostream>
using namespace std;

int firstocc(int arr[] , int n ,  int i , int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }

    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    int restArr = lastocc(arr,n,i+1,key);
    if(restArr!=-1){
        return restArr;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main () {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ;i++){
        cin >> arr[i] ;
    }
    int c;
    cin >> c;
    int result1 = firstocc(arr,n,0,c);
    int result2 = lastocc(arr,n,0,c);

    cout << result1 << endl;
    cout << result2 << endl;
    return 0;
}