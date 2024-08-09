// Divyansh Rastogi
// 23070123048

#include <iostream>
using namespace std;

int main() {
    int a,b,x,y,z,w,r;
    cout << "enter the number:";
    cin >> a >> b;
    x = a|b;
    cout << "\nans is :" << x;
    y = a^b;
    cout << "\nans is :" << y;
    z = a&b;
    cout << "\nans is :" << z;
    w = a << 1;
    cout << "\nans is :" << w;
    r = a >> 1;
    cout << "\nans is :" << r;

    return 0;
}
/* output :-
enter the number:54
61

ans is :63
ans is :11
ans is :52
ans is :108
ans is :27*/
