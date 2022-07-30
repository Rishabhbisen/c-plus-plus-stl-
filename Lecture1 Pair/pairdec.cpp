#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>p;
    p = make_pair(1,"rishabh");
    p.first = 2;
    p.second = "bisen";
    cout<<p.first<<" "<<p.second;
    cout<<p.first<<" "<<p.second;

    cout<<"another pair"<<endl;

    pair<char,double>p1 = {'a',3.14};
    cout<<p1.first<<" "<<p1.second;

    return 0;
}
