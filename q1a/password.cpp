#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m,l;string s;
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    cin>>n>>m>>l;
    vector<int> k(l);
    vector<string> data(n),pass(m);
    vector<char> c = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (auto &x:k){
        cin>>x;
    }
    for (auto &x:data){
        cin>>x;
    }
    sort(data.begin(),data.end());
    for (auto &x:pass){
        cin>>x;
    }
    for (auto &x:pass){
        string s = "";
        for (int i=0;i<x.size();++i){
            auto it = lower_bound(c.begin(),c.end(),x[i]);
            int pos = it-c.begin();
            int dec = (pos+k[i])%c.size();
            s+=c[dec];
        }
        //cout<<s<<'\n';
        auto tt = lower_bound(data.begin(),data.end(),s);
        //if (tt!=data.end())cout<<*tt<<'\n';
        if (*tt==s) cout<<"Match"<<'\n';
        else cout<<"Unknown"<<'\n';
    }
}