#include <bits/stdc++.h>
using namespace std;

int main()
{
    // this is simple iterator
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }

    // vector<int>::iterator it = v.begin();
    // cout << (*(it + 1)) << endl;  // this the first way to decrale

    // for (it = v.begin(); it != v.end(); it++)  // this is the second way to decrale
    // {
    //     cout << *it << " ";
    // }

    //now we will decrale vector pair iterator
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {2, 4}};
    vector<pair<int, int>>::iterator iy;
    for (iy = v_p.begin(); iy != v_p.end(); iy++)
    {
        cout << (*iy).first << " " << (*iy).second << endl;
    }

    for (iy = v_p.begin(); iy != v_p.end(); iy++)
    {
        cout << iy->first << " " << iy->second << endl; // same out but way of writing is defrant
    }

    return 0;
}