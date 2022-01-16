#include <iostream>
// #include <vector>
//16.01
#include <cmath>
using namespace std;


int main(){
    long long n,c=0,s;int k;
    cin>>n>>k;long long r;
    s = 1;
    if (n==1) {cout<<0; return 0;}
    if (k==1) {cout<<n-1; return 0;}
    --n;
    while (n != 0){
      n = (n-1)/k;
      c+=1;
    }
    cout<<c;
}