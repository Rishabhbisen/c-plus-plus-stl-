#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for (int i = 0; i < n; i++)
        {
            long long candy_cut;
            cin >> candy_cut;
            bags.insert(candy_cut);
        }
        long long total_candy = 0;
        for (int i = 0; i < k; i++)
        {
            auto last_it = (--bags.end());
            long long candy_cut = *last_it;
            total_candy += candy_cut;
            bags.erase(last_it);
            bags.insert(candy_cut / 2);
        }
        cout << total_candy << endl;
    }

    return 0;
}