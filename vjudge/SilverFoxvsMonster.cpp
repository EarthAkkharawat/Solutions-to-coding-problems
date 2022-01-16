#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,d,a, coor, h,count=0;
    cin>>n>>d>>a;
    vector<pair<int,int>> v;
    vector<int> vc;
    for (int i =0;i<n;++i){
        cin>>coor>>h;
        int t = h/a; 
        if (h>=a && h%a!=0) ++t;
        v.push_back(make_pair(coor,t));
    }
    sort(v.begin(), v.end());
    int loop = (v[n-1].first)/(2*d+1);
    if ((v[n-1].first)%(2*d+1)!=0) ++loop;
    int j=0;
    for (int i=1 ;i<=loop;++i){
        while (v[j].first <= (2*d*i+1)){
            vc.push_back(v[j].second);
            ++j;
        }
        count += *max_element(vc.begin(), vc.end());
        vc.clear();
    }
    cout<<count;
}
