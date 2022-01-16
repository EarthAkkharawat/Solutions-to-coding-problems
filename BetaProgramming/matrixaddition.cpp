#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int r,c,x;
    cin>>r>>c;
    int foo1[r*c];
    int foo2[r*c];
    for (int i = 0;i<r*c;++i){
        cin>>x;
        foo1[i] = x;
    }
    for (int i = 0;i<r*c;++i){
        cin>>x;
        foo2[i] = x;
    }
    for (int i = 0;i<r*c;++i){
        foo2[i] = foo1[i]+foo2[i];
    }
    for (int i = 1;i<=r*c;++i){
        if (i%c == 0) cout<<foo2[i-1]<<'\n';
        else cout<<foo2[i-1]<<" ";
    }
}