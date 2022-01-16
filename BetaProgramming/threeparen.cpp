//13.15
#include <iostream>
#include <stack>
#include <map>
using namespace std;

int main(){
    stack<char> s;
    int n;
    cin>>n;
    string st;
    map<char,char> m;
    m['('] = ')';
    m['{'] = '}';
    m['['] = ']';
    for (int i = 0 ;i<n;++i){
        cin>>st;
        bool t = false;
        for (char c:st){
            if (m.find(c)!=m.end()){
                s.push(c);
            }else{
                if (s.empty()) {cout<<"no"<<'\n';t=true;break;}
                else if (c == m[s.top()]) s.pop();
                else {cout<<"no"<<'\n';t=true; break;}
            }
        }
        if(t==false){
            if (s.empty()) cout<<"yes"<<'\n';
            else cout<<"no"<<'\n';
        }
        while (!s.empty()) s.pop();
    }

}