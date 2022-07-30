#include<bits/stdc++.h>
using namespace std;

// void print(vector<string>v, int n){
//     for(int i = 0; i < n; i++){
//         cout<<v[i]<<" ";
//     }
// }

int main(){
    vector<string>v;
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        string x;
        cin>>x;
        v.push_back(x);
    }

    // one way to print vector
    for(auto i : v){
        cout<<i<<" ";
    }

    // second way
    // for(int i = 0; i < n; i++){
    //     cout<<v[i]<< " ";
    // }

    // third way
    // print(v,n);

    return 0;
}