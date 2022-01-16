#ifndef __STUDENT_H_
#define __STUDENT_H_
//1.15 1.37

template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int e=0,i=0,dif = last-first;
  T *arr = new T[mSize+dif]();
  for (auto it = mData;it<position;++it){
    arr[i] = mData[e];++i;++e;
  }
  for (auto it = first;it<last;++it){
    arr[i]=*it;++i;
  }
  for (;i<mSize+dif;++i){
    arr[i] = mData[e];++e;
  }
  delete [] mData;
  mData =arr;
  mSize += dif;
  mCap=mSize;

}

#endif
