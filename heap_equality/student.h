#ifndef __STUDENT_H_
#define __STUDENT_H_
//20.45

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  if (mSize != other.mSize) return false;
  CP::priority_queue<T,Comp> pq1 = *this;
  CP::priority_queue<T,Comp> pq2 = other;
  while (pq1.empty()==false){
    if (pq1.top()!= pq2.top()) return false;
    pq1.pop();pq2.pop();
  }
  //write your code here
  return true; // you can change this line
}

#endif
