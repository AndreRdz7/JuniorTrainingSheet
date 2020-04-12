#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int s1, s2, s3, s4;
    int total = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    if (s1 == s2 || s1 == s3 || s1 == s4)
    {
        total++;
    }
    if (s2 == s3 || s2 == s4)
    {
        total++;
    }
    if (s3 == s4)
    {
        total++;
    }
    cout << total << endl;
    return 0;
}
