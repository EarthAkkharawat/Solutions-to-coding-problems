#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  mHeader->prev->next = mHeader->next;
  mHeader->next->prev = mHeader->prev;
  mHeader->next->next->prev = mHeader;
  mHeader->prev = mHeader->next;
  mHeader->next = mHeader->next->next;
  mHeader->prev->next = mHeader;


}

#endif
