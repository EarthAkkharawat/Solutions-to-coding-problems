#ifndef __STUDENT_H_
#define __STUDENT_H_
//21.53
#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tem = mData[idx];
    int c;
    while (idx > 0){
        c=(idx-1)/4;
        if (mLess(mData[c], tem)) mData[idx] = mData[c];
        else break;
        idx=c;
    }
    mData[idx] = tem;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tem = mData[idx];
    int c;
    //c = (idx*4);
    //std::pair<T,int> max;
    while ((c = (idx*4)+1) < mSize){
        int p = 0;
        for (int i=1; i<=3;++i){
            //max = std::make_pair(mData[c],c);
            if (c+i < mSize){
                if (mLess(mData[c+p], mData[c+i])){
                   p = i;
                }
            }
        }
        if (c+p<mSize && mLess(tem, mData[c+p])){
            mData[idx] = mData[c+p];
        }else break;
        idx=c+p;
    }
    mData[idx] = tem;

}

#endif

