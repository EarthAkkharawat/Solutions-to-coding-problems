#ifndef __STUDENT_H_
#define __STUDENT_H_
//23.09 23.14
template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  if (mSize!=other.mSize) return false;
  for (int i =0;i<mSize;++i){
    if (mData[(mFront+i)%mCap] != other.mData[(other.mFront+i)%other.mCap]) return false;
  }return true;
}

#endif
