
#include <queue>
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int i,a,b,c,d;
    priority_queue<pair<int,int>> pq;
    for (i=1;i<=5;++i){
        cin>>a>>b>>c>>d;
        pq.push({(a+b+c+d), i});
    }
    cout<<pq.top().second<<" "<<pq.top().first;


    
}