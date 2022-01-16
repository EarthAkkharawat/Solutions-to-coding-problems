#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
//21.20
template <typename T>

void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  CP::vector<T> v;int c;
  int i,e;
  sort(data.begin(),data.end());
  for (i=0,e=0;i<mSize;++i){
      if (e<data.size() && i==data[e].first) {v.push_back(data[e].second);++e;}
      v.push_back(mData[i]);
  }
  if ((data.end()-1)->first == mSize) v.push_back((data.end()-1)->second);
  using std::swap;
  swap(mData,v.mData);
  swap(mSize,v.mSize);
  swap(mCap,v.mCap);
}

#endif
