#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){

    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    print(v);

    cout<<endl;
    // creating a copy
    vector<int>v2 = v;
    v2.push_back(5);
    v2.push_back(5);
    v2.push_back(5);
    v2.push_back(5);
    print(v2);


    return 0;
}