#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  int d = (b-a)/2;int e=0;
  for (int i=a;i<=a+d;++i){
    std::swap(mData[(mFront+i)%mCap],mData[(mFront+b-e)%mCap]);
    ++e;
  }

}

#endif
