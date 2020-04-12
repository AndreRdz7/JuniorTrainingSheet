#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int total = 0;
    string s;
    cin >> n >> s;
    if (s.length() <= 1)
    {
        cout << total << endl;
    }
    else
    {
        int first = 0;
        int second = 1;
        while (second != n)
        {
            if (s[first] == s[second])
            {
                s.erase(first, 1);
                total += 1;
                n -= 1;
            }
            else
            {
                if (second < n)
                {
                    first += 1;
                    second += 1;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}
