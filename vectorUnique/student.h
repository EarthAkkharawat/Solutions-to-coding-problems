#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
#include <unordered_set>
//0.26
//you can include any other file here
//you are allow to use any data structure
using namespace std;

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  unordered_set<T> us;
  T *arr = new T[mCap]();int e=0;
  for (int i =0;i<mSize;++i){
    if (us.find(mData[i]) == us.end()){
        arr[e++] = mData[i];
        us.insert(mData[i]);
    }
  }
  mSize = e;
  delete[] mData;
  mData = arr;
}

#endif
