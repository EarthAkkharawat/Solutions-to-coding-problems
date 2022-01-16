#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  int n = mSize/k;
  if (k%2!=0 && mSize%k != 0) ++n;
  std::vector<std::vector<T>> v(n);
  for (int i =0;i<mSize;++i){
    v[i/n].push_back(mData[i]); 
  }
  return v;
}
#endif
