#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    pair<int,int>p[n];

    for(int i = 0; i < n; i++){
        cin>>p[i].first>>p[i].second;
    }

    for(int i = 0; i < n; i++){
        cout<<p[i].first<<" "<<p[i].second<<" ";
    }


    // simple pair decraletion
    // pair<int,int>p;
    //  p = make_pair(1,2);
    //  p.first = 1;
    //  p.second = 2;

    return 0;
}
