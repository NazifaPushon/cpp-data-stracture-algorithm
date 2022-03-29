#include <iostream>
using namespace std;

void dec(int n){
    if(n==0){
        cout << endl;
        return ;
    }
    cout << n << " ";
    return dec(n-1);
}

void inc(int n){
   if(n == 0){
       cout << endl;
       return ;
   }

   inc(n -1);
   cout << n << " ";

}

int main(){
    int n;
    cin >> n ;
    dec(n);
    inc(n);
    return 0;
}