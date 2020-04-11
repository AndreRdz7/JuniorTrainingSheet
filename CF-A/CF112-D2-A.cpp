#include <cctype>
#include <iostream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    char first[100];
    char second[100];
    cin >> first >> second;
    string f(first);
    string s(second);
    for_each(f.begin(), f.end(), [](char &c) {
        c = ::tolower(c);
    });
    for_each(s.begin(), s.end(), [](char &c) {
        c = ::tolower(c);
    });
    if (f == s)
    {
        cout << 0 << endl;
    }
    else
    {
        if (f < s)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
