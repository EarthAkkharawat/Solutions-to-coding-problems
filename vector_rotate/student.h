#ifndef __STUDENT_H_
#define __STUDENT_H_
//13.08 13.58
template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  auto it =  first;CP::vector<T> v;
  for (auto it=first;it!=first+k;++it){
    v.push_back(*it);
  }
  //T tem = *first;
  for (it = first;it!=last-k;++it){
    *it = *(it+k);
  }
  for (auto &x:v){
    *it = x;
    ++it;
  }
  //*(it) = tem;//std::cout<<*it;

  


}

#endif
