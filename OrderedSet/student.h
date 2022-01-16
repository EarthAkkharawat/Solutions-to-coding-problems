#include <vector>
using namespace std;
//#include <algorithm>
#include <unordered_set>
//23.41
template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    unordered_set<int> us;
    for (auto &x:A) {v.push_back(x);us.insert(x);}
    for (auto &x:B){
        if (us.find(x)==us.end()) v.push_back(x);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    unordered_set<int> us;
    for (auto &x:B) {us.insert(x);}
    for (auto &x:A){
        if (us.find(x)!=us.end()) v.push_back(x);
    }
    return v;
}

