#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    // p = {1, "abc"};
    p = make_pair(23, "abc");  // this is second way to decral the pair
    pair<int, string> &p1 = p; // we can change the value of pair
    p1.first = 12;
    cout << p.first << " " << p.second << endl;
    int a[] = {1, 2, 3};
    int b[] = {3, 4, 1};
    pair<int, int> p_array[3];
    p_array[0] = {1, 3};
    p_array[1] = {2, 4};
    p_array[2] = {3, 1};
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    // we can take input from the user
    // pair<int, int> p;
    // cin >> p.first;
    // cout << p.first;
    // cin >> p.second;
    // cout << p.second;

    return 0;
}