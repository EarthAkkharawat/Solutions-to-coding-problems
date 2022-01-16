#include <stack>
#include <iostream>

using namespace std;

int main(){
    stack<char> s;
    string oper;
    cin>>oper;
    bool t = false;
    int len = oper.length();
    if (len%2 != 0) cout<<"NO"<<'\n';
    else {
        for (int i =0;i<len/2;++i){
            s.push(oper[i]);
        }
        for (int i = len/2;i<len;++i){
            if (oper[i] != s.top()) {cout<<"NO";t= true;break;}
            else s.pop();
        }
        if(t==false){

            if (s.empty()) cout<<"YES";
            else  cout<<"NO";
        }
    }
}