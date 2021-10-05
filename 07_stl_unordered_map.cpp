#include <bits/stdc++.h>
using namespace std;
void print_map(unordered_map<int, string> m)
{
    cout << m.size() << endl;
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
/**
 inbuilt implementation
 time complexity
 valid keys datatype
 */

int main()
{
    unordered_map<int, string> m;
    m[1] = {"abc"};
    m.insert({2, "bcb"});
    m.insert({4, "sdd"});
    m.insert({3, "sfd"});
    m.insert({3, "sfd"});  // we can not use duplicate in unordered_map
    print_map(m);

    return 0;
}