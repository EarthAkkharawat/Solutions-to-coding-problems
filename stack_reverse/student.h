#ifndef __STUDENT_H_
#define __STUDENT_H_
//13.45 13.50
template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    if(mCap-mSize == other.mCap-other.mSize) return 0;
    else if(mCap-mSize<other.mCap-other.mSize) return -1;
    else return 1;
}

#endif
