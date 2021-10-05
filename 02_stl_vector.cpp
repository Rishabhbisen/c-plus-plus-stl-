#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> v)
{
    cout << "size :" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// in vector we can define arry[] with the use of vector

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        print_vec(v);
        v.push_back(x);
        // cout << "size :" << v.size() << " "; // this is first method and we will use function inthis method
        print_vec(v);
    }

    // we can inisilize arry without input
    // vector<int> v(5); // if we write vector<int>v( 5, 3) ; 3d print with the position of 0
    // v.push_back(34);
    // v.push_back(70); // elimant push on the last position of arry
    // v.pop_back();    // elemant pop on the last elemant of arry
    // print_vec(v);

    // how make copy on the vector
    // vector<int> v2 = v;
    // v2.push_back(134); // this is the copy of an arry if we want to store all the elemant of arry so we have to put & adress
    // of arry
    // print_vec(v2);

    // we can make <string> vector and all the other things we can make

    //input of this programme is
    // 5

    return 0;
}