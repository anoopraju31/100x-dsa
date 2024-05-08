#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";

    s[2] = 'n';

    for (int i = 0; i < 5; i++)
    {
        cout << s[i] << endl;
    }

    cout << endl;

    for (char c : s)
    {
        cout << c << " ";
    }

    cout << endl;

    string a = "Hello";
    string b = "World";

    cout << a + b;

    return 0;
}