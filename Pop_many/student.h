#ifndef __STUDENT_H_
#define __STUDENT_H_
//14.11

template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  //if (K>mSize) K=mSize;
  //T* arr = new T[mSize-K](); int e=0;
  //for (int i = 0;i<K;++i){
    //arr[i] = mData[i];
  //}
  //delete [] mData;
  //mData=arr;
  if (K>mSize) mSize=0;
  else mSize-=K;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  //T* arr = new T[mSize-K]();int e=0;
  if (K>mSize) K=mSize;
  T* arre = new T[K]();int e= 0;
  std::stack<T> s;
  for (int i =mSize-K;i<mSize;++i) arre[e++] = mData[i];
  multi_pop(K);
  for (int i =0;i<K;++i) s.push(arre[i]);
  delete [] arre;
  return s;





}

#endif
