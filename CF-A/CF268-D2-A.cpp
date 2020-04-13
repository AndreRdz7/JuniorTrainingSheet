#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, home, away;
    int total = 0;
    vector<int> h, a;
    cin >> n;
    while (n--)
    {
        cin >> home >> away;
        h.push_back(home);
        a.push_back(away);
    }
    for (int i = 0; i < h.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == h[i])
            {
                total++;
            }
        }
    }
    cout << total << endl;
    return 0;
}
