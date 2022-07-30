#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, int>m;
    m.insert({1,1});
    m.insert({2,1});
    m.insert({6,1});
    m.insert({3,4});
    m.insert({3,4});
    m[2] = 5;
    
    // auto p = m.find(3);
    m.erase(3);

    // for printing 
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }

  
    return 0;
}