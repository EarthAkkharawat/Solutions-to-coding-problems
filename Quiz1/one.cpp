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
    vector<vector<int>> vp(m);
    for (auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    for (int i =0;i<m;++i){
        cin>>num;
        for (int e =0;e<num;++e){
            cin>>att;
            vp[i].push_back(att);
        }
    }
    // vector<int> vi = vp[1];
    // for (auto tt = vi.begin(); tt<vi.end();++tt) cout<<*tt;


    for (int i =0;i<m;++i){
        vector<int> vi = vp[i];
        //sort(vi.begin(), vi.end());
        for (auto tt = vi.begin(); tt<vi.end();++tt){
            auto it = upper_bound(v.begin(),v.end(), *tt);
            if (it == v.end()) {ans=i+1;check=2;break;}
            else *it = -1;
            sort(v.begin(),v.end());
        }
        if (check != 0) break;
    }

    if (check==0) {ans = m+1; cout<<ans;}
    else cout<<ans;
}















//         if (num>1){
//             for (int e=0;e<num;++e){
//                 cin>>att;
//                 auto it = upper_bound(v.begin(),v.end(), att);
//                 if (it == v.end()) {ans=i+1;check=2;}
//                 else *it = -1;
//             }
//         }//else if (check==2) break;
//         else{
//             cin>>att;
//             auto it = upper_bound(v.begin(),v.end(), att);
//             if (it == v.end()) {ans=i+1;check=1;}
//             else *it = -1;

//         }
//     }
//     if (check==0) {ans = m+1; cout<<ans;}
//     else cout<<ans;
    

// }