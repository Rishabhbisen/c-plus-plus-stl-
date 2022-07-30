#include<bits/stdc++.h>
using namespace std;

void print1(vector<int>&v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<vector<int>>v;
    int N;
    cin>>N;
    for(int i = 0; i < N; i++){
        int n;
        cin>>n;
        vector<int>temp;
        for(int j = 0; j < n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); i++){
        print1(v[i]);
    }

    return 0;
}