#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  if (ls.size()==0) return;
  for (auto &x:ls){
    for (auto &i:x){
      insert(end(),i);
    }
    x.mSize=0;
  }
  //std::cout<<'\n'<<ls.size();
}

#endif
