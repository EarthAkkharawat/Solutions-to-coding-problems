#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;
    for (auto&x:s){
        v.push_back(x);
    }
    if (v[v.size()-2]=='e' && v[v.size()-1]=='r'){
        cout<<"er";
    }
    else if (v[v.size()-3]=='i' && v[v.size()-2]=='s' && v[v.size()-1]=='t'){
        cout<<"ist";
    }
}