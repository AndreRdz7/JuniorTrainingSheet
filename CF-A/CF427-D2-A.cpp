#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, crimes = 0;
    cin >> n;
    int event;
    int cops = 0;
    while (n--)
    {
        cin >> event;
        if (event < 0)
        {
            if (cops < 1)
            {
                crimes++;
            }
            else
            {
                cops--;
            }
        }
        else
        {
            cops += event;
        }
    }
    cout << crimes << endl;
    return 0;
}
