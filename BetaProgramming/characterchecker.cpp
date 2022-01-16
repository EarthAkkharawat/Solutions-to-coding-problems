#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    int cb,cs,n=0;
    cin>>s;
    set<char> sbig = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    set<char> ssmall = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (char &e:s){
        if (cs != 0 && cb != 0) {cout<<"Mix";n=1;break;}
        else if (sbig.find(e)!=sbig.end()) cb+=1;
        else cs+=1;
    }
    if (n==0){
        if (cs==0) cout<<"All Capital Letter";
        else cout<<"All Small Letter";
    }
}