#include<bits/stdc++.h>
using namespace std;

int main(){
    // 0(1) - tc
    unordered_map<string, int>m;
    m.insert({"rishabh",2});
    m.insert({"apple",7});
    m.insert({"apple",9});
    m.insert({"mango",9});
    m.insert({"milk",4});
    m.insert({"poto",4});
    m.insert({"qto",4});
        

    
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<" "<<endl;  
    }





    return 0;
}