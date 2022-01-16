#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n = 3;
        v.push_back(vector<int> ());
        v.push_back(vector<int> ());

        v.push_back(vector<int> ());

    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
        for (int i =0;i<n;++i) v.push_back(vector<int> ());
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n = G.n;
        v=G.v;
    }

    void AddEdge(int a, int b) {
        // Your code here
        v[a].push_back(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        for (int i =0;i<v[a].size();++i){
            if (v[a][i] == b) v[a].erase(v[a].begin()+i);
        }
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        for (int i =0;i<v[a].size();++i){
            if (v[a][i] == b) return true;
        }
        return false;
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph d(n);
        for (int i=0;i<v.size();++i){
            for (int j=0;j<v[i].size();++j){
                d.AddEdge(v[i][j], i);
            }
        }
        return d;
    }

protected:
    int n;
    // Your code here
    vector<vector<int>> v;
};
#endif // __DENSE_GRAPH_H__
