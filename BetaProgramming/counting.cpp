
#include <iostream>
#include <queue>
using namespace std;

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0);
    int n,k,c=1;
    cin>>n>>k;
    queue<int> q;//1 2 3 4 5
    for (int i =1;i<=n;++i) q.push(i);
    while (q.size() > 0)
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout<<q.front();
        q.pop();
    }
}
    // while (!q.empty()){
    //     if (c%k == 0){
    //         cout<<q.front();
    //         q.pop();
    //         c = 0;
    //     }else{
    //         q.push(q.front());
    //         q.pop();
    //     }
    //     ++c;
    // }
    


