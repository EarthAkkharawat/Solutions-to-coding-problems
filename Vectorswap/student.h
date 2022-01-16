#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
//20.42
template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  // your code here
    using std::swap;
    swap(mSize, other.mSize);
    swap(mCap, other.mCap);
    swap(mData, other.mData);
}


#endif
