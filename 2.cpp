#include <iostream>
using namespace std;
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << s.length() << endl;
    cout << part.length() << endl;
    cout << s.find(part) << endl;
    cout << s.erase(s.find(part), part.length())<< endl;

    string str("This is an example sentence.");
    cout << str << '\n';
    // "This is an example sentence."
    str.erase(10, 8); //            ^^^^^^^^
    cout << str << '\n';
    // "This is an sentence."
    str.erase(str.begin() + 9); //           ^
    cout << str << '\n';
    // "This is a sentence."
    str.erase(str.begin() + 5, str.end() - 9); //       ^^^^^
    cout << str << '\n';
}