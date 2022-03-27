#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,s= 0;
    cin >> x >> y;
    int *arr[x];
    int itaretor1 = x;
    int itaretor2 = y;
    while(itaretor1 >= 0){
        int num;
        cin >> num;
        arr[s] = new int[num];
        for(int i = 0; i < num;i++){
            cin >> arr[s][i];
        }
        s++;
        itaretor1--;
    }
    while(itaretor2 >= 0){
        int a ,b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
        itaretor2--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}