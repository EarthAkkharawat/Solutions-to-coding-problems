#include <iostream>
#include <list>


using namespace std;

int main(){
    int n,k,v,x;
    cin>>n>>k>>v;
    list<int> l(n);
    for (auto &x:l) cin>>x;
    auto it = l.begin();
    for (int i =0;i<k;++i)++it;
    it = l.insert(it,v);
    auto de = it;auto as = it;
    if (k-1 >= 0) --de;
    if (k+1 < l.size()-1) ++as;
    int c = 1;
    while(1){
        if (*de==v){
        
            --de;
            ++c;
            
        }
        if (*as==v){
                ++as;
                ++c;
        }
        if (*de!=v && *as!=v && c>=3){
            ++de;
            de = l.erase(de,as);as=de;
            v=*de;--de;++as;c=1;
            if (*de!=v) break;
        }
        if ((*de!=v && *as!=v && c<3) || l.size()==0) break;
    }
    for (auto &x:l){
        cout<<x<<" ";
    }
}