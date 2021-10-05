#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> m)
{
    cout << m.size() << endl;
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[4] = "afgc";
    m[2] = "asf";
    m[3] = "abj";
    m.insert({5, "jsj"});
    m.insert({4, "qwe"}); // we can not use duplicte key

    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // for (auto pr : m)   // we can decrale in a simple way
    // {
    //     cout << pr.first << " " << pr.second << endl;
    // }

    //find operation in map
    auto it = m.find(3);
    if (it == m.end())
    {
        cout << "NO value" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // m.erase(3);   // we can erase any key

    m.clear(); //clear all map

    print(m);

    return 0;
}