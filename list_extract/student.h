#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  for (auto it=a;it!=b;++it){
    if (*it == value){
      node *tem = new node();
      tem->next = output.mHeader->next;
      output.mHeader->next->prev = tem;
      output.mHeader->next = tem;
      tem->prev = output.mHeader;
      tem->data = value;
      ++output.mSize;
      //iterator at = it.ptr->next;
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      delete it.ptr;
      //it=at;--it;
      --mSize;
    }
  }




}

#endif
