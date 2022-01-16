#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,k,f,l,check;
    vector<pair<int,int>> v;
    cin>>n>>k>>f>>l;
    v.push_back(make_pair(f,l));
    for (int i =0;i<n-1;++i){
        cin>>f>>l;
        if (k==1){
            auto it = upper_bound(v.begin(), v.end(), f, comp);
        }

    
    }

}