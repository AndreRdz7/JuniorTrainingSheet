#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int h, n, a;
    int total = 0;
    cin >> n >> h;
    while (n--)
    {
        cin >> a;
        if (a > h)
        {
            total++;
        }
        total++;
    }
    cout << total << endl;
    return 0;
}
