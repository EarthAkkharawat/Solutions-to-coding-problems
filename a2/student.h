#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
  //write your code here
  if (m<=0) return false;
  if (a < begin() || b < begin()) return false;
  if (a>=end() || b>=end()) return false;
  if (a+m-1 >=end() || b+m-1>=end()) return false;
  if (a<=b && a+m-1 >= b) return false;
  if (b<=a && b+m-1>=a) return false;
  // if (a>=b && a<= b+m-1) return false;
  // if (b>=a && b<=a+m-1) return false;
  while(m--){
    T tem = *a;
    *a = *b;
    *b = tem;
    ++a;++b;
  }
  return true;
}

#endif