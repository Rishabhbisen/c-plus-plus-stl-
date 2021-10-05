#include <bits/stdc++.h>
using namespace std;

void println_vector(vector<int> &v)
{
    cout << "size :" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        vector<int> temp;
        for (int j = 0; j < y; i++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        println_vector(v[i]);
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 4;
    int col = 5;
    vector<vector<int>> vec;
    int num = 10;
    for (int i = 0; i < row; i++)
    {
        vector<int> v1;
        for (int j = 0; j < col; j++)
        {
            v1.push_back(num);
            num += 5;
        }
        vec.push_back(v1);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); i++)
        {
            cout << vec[i][j] << " " << endl;
        }
    }

    return 0;
}
*/