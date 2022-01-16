#include <iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int arraysize = 1000000;
    int foo[arraysize] = {};
    for (int i =1;i<=1000000;++i){
        for (int j =i; j<=1000000;j+=i) foo[j]+=1;
    }
    int n,x,y,d;
    cin>>n;
    for (int i=0;i<n;++i) {
        int c=0;
        cin>>x>>y>>d;
        for (int i = x;i<=y;++i){
            if (foo[i] == d) ++c;
        }
        cout<<c<<'\n';
    }
}
