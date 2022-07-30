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

    int N;
    cin>>N;
    auto p = m.find(N);

    if(p == m.end()){
        cout<<"no value"<<endl;
    }
    else
    {
        cout<<(*p).first<<" "<<(*p).second<<" "<<endl;
    }
    
    //for printing
    // for(auto i : m){
    //     cout<<i.first<<" "<<i.second<<" "<<endl;  
    // }

 



    // map<int, int>m;
    // m.insert({1,1});
    // m.insert({2,1});
    // m.insert({6,1});
    // m.insert({3,4});
    // m[2] = 5;
    
    // auto p = m.find(3);

    // if(p == m.end()){
    //     cout<<"no value"<<endl;
    // }
    // else
    // {
    //     cout<<(*p).first<<" "<<(*p).second<<" "<<endl;
    // }


    //for printing 
    // for(auto i : m){
    //     cout<<i.first<<" "<<i.second<<" "<<endl;
    // }
   



    return 0;
}