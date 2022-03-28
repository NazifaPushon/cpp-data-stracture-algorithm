#include <iostream>
#include <string>
using namespace std;

int main () {
    string a = "ADFASDREG";

    for(int i =0; i < a.size() ; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] += 32;
        }
    }
    cout << a << endl;
    return 0;
}