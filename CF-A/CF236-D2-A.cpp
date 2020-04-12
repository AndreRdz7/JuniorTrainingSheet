#include <iostream>
#include <bits/stdc++.h>
#include <limits>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_set<char> set;
    char s[100];
    cin >> s;
    string str(s);
    for (char const &c : str)
    {
        set.insert(c);
    }
    if (set.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
