#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  T* arr = new T[mSize*2]();
  size_t i,j;
  for (i=0,j = (mSize*2)-1; i<mSize*2 && j>=0;++i,--j){
    if (i>=mSize){
        arr[i] = mData[j];
    }else{
        arr[i] = mData[i];
    }
  }
  delete [] mData;
  mData = arr;
  mCap = mSize*2;
  mSize = mSize*2;
}

#endif
