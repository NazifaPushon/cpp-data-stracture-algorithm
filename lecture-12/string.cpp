#include <iostream>
#include <string>
using namespace std;

int main () {
    string a;
    getline(cin,a);
    cout << a << endl;

    string s1 = "fam";
    string s2 = "ily";

    s1.append(s2);
    cout << s1 << endl;
    return 0;
}