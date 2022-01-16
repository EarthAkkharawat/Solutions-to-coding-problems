#ifndef __STUDENT_H_
#define __STUDENT_H_
//
#include <map>

template <typename T>
//20.08 20.16
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> re;
    for (auto &x:k){
        int c = 0;
        for (int i =0;i<mSize;++i){
            if (x == mData[(mFront+i)%mCap]){
                ++c;
            }
        }
        re.push_back(std::make_pair(x,c));
    }
    return re;
}

#endif
