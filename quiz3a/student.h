#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include <cmath>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;int e,c=0;
  for (int i=0;i<mSize;++i){
    if ((int) log2(i)==k){
      r.push_back(mData[i]);
    }
  }
  sort(r.rbegin(),r.rend());
  return r;
}

#endif

