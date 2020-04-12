#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    string s, t;
    cin >> s >> t;
    size_t pos = 0;
    for (size_t i = 0; i < t.length(); ++i)
    {
        if (t[i] == s[pos])
        {
            pos += 1;
        }
    }
    cout << pos + 1 << endl;
    return 0;
}