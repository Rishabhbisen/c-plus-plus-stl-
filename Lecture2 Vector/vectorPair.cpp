#include<bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>>v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    // we can perform sorting revesing and so many opration
    // sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    print(v);

    return 0;
}