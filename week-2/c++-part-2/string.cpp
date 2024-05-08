#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello World";

    // s[2] = 'n';

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << s[i] << endl;
    // }

    // cout << endl;

    // for (char c : s)
    // {
    //     cout << c << " ";
    // }

    // cout << endl;

    // string a = "Hello";
    // string b = "World";

    // cout << a + b << endl;
    // cout << (a < b) << endl;

    string s = "Hello World";

    // length
    cout << s.length();

    // concatenation
    string a = "Hello ", b = "World";
    cout << a + b; // "Hello World"

    // Equality
    string c = "Test", d = "Test";
    bool res = c == d; // true

    cout << res << endl;
    cout << d.compare(c); // = 0 if equal, < 0 is a is smaller, > 0 if a is larger

    // Substring extraction
    cout << s.substr(1, 4); // ello, first argument is starting index and second is length

    // Substring search
    cout << s.find("orl"); // First index where "orl" is present in string. If not found returns string::npos

    // Replacing substring
    cout << s.replace(0, 3, "Hi"); // Replaces 3 characters from index 0 with "Hi"

    // Inserting substring
    cout << s.insert(6, "new "); // Hello new World, Inserts the substring at index 6

    // Iterators
    // cout << s.begin() << " " << s.end();

    // Erase
    s.erase(2, 3);                         // Erases 3 characters starting from index 2
    s.erase(s.begin() + 1, s.begin() + 5); // Erases all characters in between indices [1, 5)

    return 0;
}