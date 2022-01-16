#ifndef __STUDENT_H_
#define __STUDENT_H_

//23.18 23.34
template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  if (k>mSize) k = mSize;
  for (int i =0;i<k;++i){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  int cap = to-from;int i =0;
  mData = new T[cap]();
  for (auto it = from;it!=to;++it){
    mData[i++] = *it;
  }
  mSize = cap;mFront = 0;mCap = cap;
}

#endif
