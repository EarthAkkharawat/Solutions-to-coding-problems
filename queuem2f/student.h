#ifndef __STUDENT_H_
#define __STUDENT_H_
//17.02
#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {// 1 2 . . . . 1 7 8 9
    //your code here
    T tem = mData[(mFront+pos)%mCap];
    for (int i = pos;i>0;--i){
        mData[(mFront+i)%mCap] = mData[(mFront+i-1)%mCap];
    }
    mData[mFront] = tem;

}

#endif
