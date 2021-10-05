#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        m.insert(str);
    }
    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it) << endl;
    // }
    for (auto value : m)
    {
        cout << value << endl;
    }
    return 0;
}