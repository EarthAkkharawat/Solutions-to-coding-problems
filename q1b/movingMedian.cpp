#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n,w;
    cin>>n>>w;
    ios::sync_with_stdio(false);std::cin.tie(0);
    vector<int> v(n),r;
    for (auto &x:v) cin>>x;
    multiset<int> s(v.begin(), v.begin()+w+1);
    auto m = next(s.begin(), w/2);
    for (auto i = w+1; i<v.size();++i){
        r.push_back(*m);
        s.insert(v[i]);
        if (v[i] < *m)m--;
        if (v[i-(w+1)] <= *m)m++;
        s.erase(s.lower_bound(v[i-(w+1)]));
    }
    r.push_back(*m);
    for(auto &x:r) cout<<x<<" ";
}