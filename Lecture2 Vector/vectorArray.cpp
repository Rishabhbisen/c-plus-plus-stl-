//this is vector array pair
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_arry(vector<pair<int,int>> &v)
{
    cout<<"size "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " "<<v[i].second<<" ";
    }
    cout << endl;
}
int main()
{

    int N;
    cin >> N;
    vector<pair<int,int>> v[N];  //this is a vector's array
    for (int i = 0; i < N; i++)
    {
        //this is vector
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            //vector elemant
            int x,y;
            cin >> x>>y;
            v[i].push_back(make_pair(x,y));
        }
    }

    for(int i = 0; i < N; i++){
        print_arry(v[i]);
    }

    return 0;
}