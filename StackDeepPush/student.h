#ifndef __STUDENT_H_
#define __STUDENT_H_

//13.55 14.03
template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  ensureCapacity(mSize+1);
  if (pos>mSize) pos = mSize;
  int f = mSize-pos;
  for (int i = mSize;i>f;--i){
    mData[i]= mData[i-1];
  }
  mData[f] = value; ++mSize;
}

#endif
