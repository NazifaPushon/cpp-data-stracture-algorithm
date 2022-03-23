#include <iostream>
using namespace std;

int main () {
    int n, m;
    cin >>n >> m;

    int arr[n][m];

    for (int i = 0; i< n;i++){
        for(int j = 0; j < m;j++){
            cout << "Giving input for " << i << " " << j <<" : " ;
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i< n;i++){
        for(int j = 0; j < m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int x;
    cin >> x;

    bool flag = false;
    int r = 0 , c = m-1;
    while((r < n || c >= 0) && flag == false) {
        if(arr[r][c] == x){
            flag=true;
        }if(arr[r][c] > x) {
            c--;
        }else{
            r++;
        }
    }
    if(flag){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}