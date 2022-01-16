#ifndef __STUDENT_H_
#define __STUDENT_H_
//20.15 20.39
#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <algorithm>
#include <math.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for (int i =0;i<mSize;++i){
    if (mData[i]==k){
      return true;
    }
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  if (! find(k)) return -1;
  int pos;
  for (int i =0;i<mSize;++i){
    if (mData[i]==k){
      pos = i;
    }
  }
  return (int) log2(pos+1);
}

#endif

