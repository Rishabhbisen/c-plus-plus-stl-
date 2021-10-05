// in multiset duplicat are allowed
//print on sorted ordered
#include <bits/stdc++.h>
using namespace std;

void print(multiset<int> u)
{
    cout << u.size() << endl;
    for (auto value : u)
    {
        cout << value << endl;
    }
}

int main()
{
    multiset<int> u;
    u.insert(1234);
    u.insert(1267);
    u.insert(1256); //o(log(n)
    u.insert(1234);
    u.insert(123);
    u.insert(123);
    // u.erase(1234); // we can erase all the 1234 value

    auto it = u.find(1234);
    if (it != u.end())
    {
        u.erase(it); // if we pass the iterater on that case delet only one value
    }
    print(u);
    return 0;
}