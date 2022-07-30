#include<bits/stdc++.h>
using namespace std;

int main(){

    // map input
    int n;
    cin>>n;
    map<int, int >m;
    for(int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;
        m.insert(make_pair(x,y));
    }

    
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<" "<<endl;  
    }

    cout<<m.size();



    // tc - 0(log n)
    // map<string, int>m;
    // m.insert({"rishabh",1});
    // m.insert({"aman",1});
    // m.insert({"golu",1});
    // m.insert({"syam",4});
    // m["baba"] = 5;

    // for(auto i : m){
    //     cout<<i.first<<" "<<i.second<<" "<<endl;
    // }


    // map<int, int>m;
    // m.insert({1,1});
    // m.insert({2,1});
    // m.insert({6,1});
    // m.insert({3,4});
    // m[2] = 5;
    
    
    // for(auto i : m){
    //     cout<<i.first<<" "<<i.second<<" "<<endl;
    // }
   



    return 0;
}