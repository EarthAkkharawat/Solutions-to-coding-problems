//19.41
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,a;
    vector<int> v;
    cin>>n>>a;
    for (int i = n-1; i>=a;--i){
        int j=i;
        while (j>0){
            if ((j-1)/2 == a){
                v.push_back(i);
            }
            j = (j-1)/2;
        }
    }
    v.push_back(a);
    cout<<v.size()<<'\n';
    for (int i =v.size()-1;i>=0;--i){
        cout<<v[i]<<" ";
    }
}