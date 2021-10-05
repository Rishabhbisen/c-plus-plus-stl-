#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    cout << s.size() << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}

int main()
{
    set<string> s;
    s.insert("abc");  //log(n) -- time complexicty
    s.insert("sddf"); // this will print in sortes order
    s.insert("ert");
    s.insert("abc");
    print(s);

    // auto it = s.find("abc"); // we can fine any elemant in the queue
    // if (it != s.end())
    // {
    //     cout << (*it);
    // }

    // s.erase("abc"); // we can erase elemant
    // print(s);

    return 0;
}