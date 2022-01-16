#ifndef __STUDENT_H_
#define __STUDENT_H_
//19.29 1957
template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  bool b = false;
  for (int i =0;i<mSize;++i){
    if (mData[i]==*it && mData+i == it) {b= true;break;}
    else b= false;
  }
  if (b) return true;
  else return false;

}

#endif
