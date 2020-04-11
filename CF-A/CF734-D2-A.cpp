#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    int anton = 0;
    int danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    if (danik > anton)
    {
        cout << "Danik" << endl;
    }
    if (anton == danik)
    {
        cout << "Friendship" << endl;
    }
    return 0;
}
