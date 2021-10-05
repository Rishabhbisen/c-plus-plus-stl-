#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4}; // simple way
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it; // first way to decrale
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++) // in the plac of iterater decraltion we can use auto keyword
    {
        cout << *it << " ";
    }

    cout << endl;
    for (int &value : v) // second way to decrale
    {
        value++;
    }
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    for (pair<int, int> &good : v_p)
    {
        cout << good.first << " " << good.second << endl;
    }

    cout << endl;

    for (auto &good : v_p)
    {
        cout << good.first << " " << good.second << endl;
    }

    cout << endl;

    for (int value : v)
    {
        cout << value << " ";
    }

    return 0;
}