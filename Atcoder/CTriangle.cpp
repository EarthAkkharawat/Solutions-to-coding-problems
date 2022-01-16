#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long sf=1, tf = 1,nf =1;

    if (n<3) {cout<<0; return 0;}
    for (int i=1;i<=n-3;++i){
        sf*=i;
    }
    cout<<sf<<" ";
    for (int i=1;i<=3;++i){
        tf*=i;
    }
    cout<<tf<<" ";
    for (int i=1;i<=n;++i){
        nf*=i;
    }
    cout<<nf<<" ";
    long long ans = nf/(sf*tf);
    cout<<ans;

}