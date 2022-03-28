#include <iostream>
using namespace std;
int factorial(int n, int p){
    if(p == 0) {
        return 1;
    }
    int prevPower = factorial(n,p-1);
    return n*prevPower;
}

int main () {
    int n,p;
    cin >> n >> p;

    cout << factorial(n,p) << endl;
    return 0;
}