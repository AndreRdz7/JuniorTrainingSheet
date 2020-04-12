#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[])
{
    int e1ement, res;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            std::cin >> e1ement;
            if (e1ement == 1)
            {
                res = abs(2 - row) + abs(2 - col);
            }
        }
    }
    cout << res << endl;
    return 0;
}
