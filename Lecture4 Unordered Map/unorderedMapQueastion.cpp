#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string,int>m;
    for(int i = 0; i < n; i++){
        string x;
        cin>>x;
        // m[x]++;
        m.insert(make_pair(x,0));
        m[x]++;
    }

    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }


    // input - 6
    // abc,abc,abc,bas,gdf,bas,klj,ljk



    return 0;
}