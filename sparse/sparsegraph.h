#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__
#include <set>
#include <vector>
// Your code here

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        v.clear();
        int n = 3;
        set<int> tem={-1};
        while(n--) v.push_back(tem);
        s=3;
    }

    SparseGraph(int n_in) {
        // Your code here
        v.clear();
        s=n_in;
        set<int> tem={-1};
        while(n_in--) v.push_back(tem);
    }

    SparseGraph(const SparseGraph& G) {
        s = G.s;
        v = G.v;
        //s = G.s;
    }

    void AddEdge(int a, int b) {
        v[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        
        if (v[a].find(b) != v[a].end()) v[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        auto it = v[a].find(b);
        if (it!=v[a].end()) return true;
        return false;
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph sg(s);
        for (int i = 0;i<v.size();++i){
            for (auto it = v[i].begin();it!=v[i].end();++it){
                sg.v[*it].insert(i);
            }
        }
        //auto d = new SparseGraph(neww);
        return sg;
    }

protected:
    // Your code here
    int s;
    vector<set<int>> v;
};
#endif // __SPARSE_GRAPH_H__

