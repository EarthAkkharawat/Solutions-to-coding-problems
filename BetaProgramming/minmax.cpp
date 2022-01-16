#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,x;
    cin>>n;
    set<int> s;
    for (int i=0;i<n;++i) {cin>>x; s.insert(x);}
    cout<<*s.begin()<<'\n';
    cout<<*(--s.end())<<'\n';
}