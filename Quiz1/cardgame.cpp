#include <iostream>
#include <vector>
// #include <set>
// #include <map>
#include <algorithm>
// #include <stack>
// #include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,num,att,check=0,ans;
    cin>>n>>m;
    vector<int> v(n);
    for (auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    for (int i =0;i<m;++i){
        cin>>num;
        //if (check != 0) continue;
        for (int e=0;e<num;++e){
            cin>>att;
            if (check != 0) continue;
            auto it = upper_bound(v.begin(),v.end(), att);
            if (it == v.end()) {ans=i+1;check=2; continue;}
            else v.erase(it);
        }
        
    }
    if (check==0) {ans = m+1; cout<<ans;}
    else cout<<ans;
    
    
    





}
