#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, card;
    int s = 0, d = 0;
    vector<int> cards;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> card;
        cards.push_back(card);
    }
    int flag = 0, first = 0, last = cards.size() - 1;
    for (int i = 0; i < n; i++)
    {
        if (flag == 0)
        {
            if (cards[first] > cards[last])
            {
                s += cards[first];
                first++;
            }
            else
            {
                s += cards[last];
                last--;
            }
            flag = 1;
        }
        else
        {
            if (cards[first] > cards[last])
            {
                d += cards[first];
                first++;
            }
            else
            {
                d += cards[last];
                last--;
            }
            flag = 0;
        }
    }
    cout << s << ' ' << d << endl;
    return 0;
}
