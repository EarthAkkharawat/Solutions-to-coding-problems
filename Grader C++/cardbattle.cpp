#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
int main(){
    int n ,m,a,x,y,out; bool b = false;
    cin>>n>>m;
    map<int,int> mm;
    for (int i = 0;i<n;++i){
        cin>>a;
        ++mm[a];
    }
    for (int i =0;i<m;++i){
        cin>>x;
        for (int j = 0;j<x;++j){
            cin>>y;
            auto it = mm.upper_bound(y);
            if (it != mm.end()){
                if (it->second >1){
                    --(it->second);
                }else mm.erase(it);           
            }else {b = true;out = i+1;break;}
        }if (b) break;
    }
    if (b) cout<<out;
    else cout<<m+1;

}