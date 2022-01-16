#include <iostream>
// #include <vector>
//16.39 17.10
#include <cmath>
using namespace std;


int main(){
    int n,m,a,b,i,y,j;
    cin>>n>>m;
    for (int y =0;y<m;++y){
        bool x = false;
        cin>>a>>b;
        i=a;j=b;
        while (i >= 0 && j>=0){
            if (a==b) {
                cout<<"a and b are the same node"<<'\n';
                x=true;
                break;
            }
            if ((i=(i-1)/2) == b){
                cout<<"b is an ancestor of a"<<'\n';
                x=true;
                break;
            }
            if ((j=(j-1)/2) == a){
                cout<<"a is an ancestor of b"<<'\n';
                x=true;
                break;
            }
            if (i==0 && j == 0) break;
        }
        if (!x) {
            cout<<"a and b are not related"<<'\n';
        }
    }
}
