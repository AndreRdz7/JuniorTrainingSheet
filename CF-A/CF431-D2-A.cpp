#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int calories = 0;
    for (auto val : s)
    {
        if (val == '1')
        {
            calories += a1;
        }
        else if (val == '2')
        {
            calories += a2;
        }
        else if (val == '3')
        {
            calories += a3;
        }
        else
        {
            calories += a4;
        }
    }
    cout << calories << endl;
    return 0;
}
