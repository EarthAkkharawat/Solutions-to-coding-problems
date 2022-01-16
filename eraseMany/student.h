#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
//1.44 1.55
template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  CP::vector<T> v;
  std::set<int> s;
  for (auto &x:pos){
    s.insert(x);
  }
  for (int i =0;i<mSize;++i){
    if (s.find(i) == s.end()){
        v.push_back(mData[i]);
    }
  }

  *this = v;

}

#endif
