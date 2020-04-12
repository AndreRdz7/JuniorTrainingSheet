#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, p1, p2, p3;
    int total = 0;
    cin >> n;
    while (n--)
    {
        cin >> p1 >> p2 >> p3;
        int res = p1 + p2 + p3;
        if (res >= 2)
        {
            total++;
        }
    }
    cout << total << endl;
    return 0;
}
