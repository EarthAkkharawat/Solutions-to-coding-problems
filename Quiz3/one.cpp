#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>


using namespace std;

bool check(int f,int s, int c,int l){
    if (c>=s && f<c  && f>=0 &&s>=0&&c>=0&&l>=0 && l == (f+s)%c){
        return true;
    }else return false;
}

int main()
{
    int n,f,s,c,l,co;
    cin>>n;
    for (int i=0;i<n;++i){
        cin>>f>>s>>c>>l>>co;
        if (co == 0){
            if (check(f,s, c,l)){
                cout<<"OK"<<"\n";
            }else cout<<"WRONG"<<"\n";
        }else if (co == 1){
            if (check(f,s, c,l)){
                cout<<"OK"<<"\n";
            }else{
                int ff = (l+c-s)%c;
                cout<<"WRONG"<<" ";
                cout<<ff<<"\n";
            }
        }else if (co == 2){
            if (check(f,s, c,l)){
                cout<<"OK"<<"\n";
            }else{
                int ss = (l-f+c)%c;
                cout<<"WRONG"<<" ";
                cout<<ss<<"\n";
            }
        }else if (co == 3){
            if (check(f,s, c,l)){
                cout<<"OK"<<"\n";
            }else{
                int cc;
                if (l<=f) cc = f+s-l;
                else cc = f+s+1;
                cout<<"WRONG"<<" ";
                cout<<cc<<"\n";
            }
        }else if (co == 4){
            if (check(f,s, c,l)){
                cout<<"OK"<<"\n";
            }else{
                int ll = (f+s)%c;
                cout<<"WRONG"<<" ";
                cout<<ll<<"\n";
            }
        }
    }

}
