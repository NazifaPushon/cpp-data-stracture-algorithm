#include <iostream>
using namespace std;

int main(){
    int arr[]={12,20,40};
    cout <<*arr << endl;

    int *ptr = arr;
    for(int i = 0;i<3;i++){
        cout << *(arr+1) << endl;
        ptr++;
    }
}