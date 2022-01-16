#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  CP::stack<T> s,s1;int i=0;--last;
  //mData = new T[1]();
  for (auto it = first; it!=last;++it){
    s.push(*it);
    ++i;
  }
  while (!s.empty()){
    s1.push(s.top());
    s.pop();
  }
  *this = s1;
  // mData[i++] = *first;
  // mSize = i;
  // mCap = i;
}

#endif
