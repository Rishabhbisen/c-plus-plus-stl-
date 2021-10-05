#include <bits/stdc++.h>
using namespace std;

// unordered_set does not support ordere(sorting)
// it is same as map
void print(unordered_set<string> p)
{
    cout << p.size() << endl;
    for (auto value : p)
    {
        cout << value << endl;
    }
    //both are the method
    for (auto it = p.begin(); it != p.end(); it++)
    {
        cout << (*it) << endl;
    }
}

int main()
{
    unordered_set<string> p;
    p.insert("abc");
    p.insert("sgf"); //o(log(n))
    p.insert("hgh");
    p.insert("adg");
    print(p);
    return 0;
}