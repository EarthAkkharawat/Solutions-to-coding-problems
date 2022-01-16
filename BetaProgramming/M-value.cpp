#include <queue>
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t,n,k,x;
    cin>>t;
    for (int i = 0;i<t;++i){
        cin>>n>>k;
        int max = -1;
        for(int j = 0;j<n;++j){
            cin>>x; int r = x%k;
            if (r > max) max=r;
        }
        cout<<"Case #"<<i+1<<": "<<max<<'\n';
    }
}