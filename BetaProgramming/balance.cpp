#include <iostream>
//14.22
#include <vector>
using namespace std;

vector<int> ggg(vector<int> v){
    return v;
}

int main(){
    vector<int> v = {1,2};
    auto d = ggg(v);
    for(int c:d){
        cout<<c;
    }
}