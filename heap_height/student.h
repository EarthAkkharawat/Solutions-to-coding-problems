#ifndef __STUDENT_H_
#define __STUDENT_H_
//20.05 20.09
#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <cmath>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if (this->mSize == 0) return -1;
  return (int) log2(this->mSize);
}

#endif

