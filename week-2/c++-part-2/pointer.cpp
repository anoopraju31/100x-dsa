#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 20;
    int *ptr = &x;

    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &x << endl;
    cout << x << endl;
    cout << *&x << endl;

    *ptr = 30;
    cout << x << endl;
    return 0;
}