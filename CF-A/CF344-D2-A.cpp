#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s, last{"  "};
    int n, total = 1;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s[1] == last[0])
        {
            total++;
        }
        last = s;
    }
    cout << total << endl;
    return 0;
}
