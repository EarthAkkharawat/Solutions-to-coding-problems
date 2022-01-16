#ifndef __STUDENT_H__
#define __STUDENT_H__

#include<bits/stdc++.h>
using namespace std;

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  map<int,int> m;
  int temp_size = mSize;
  while (temp_size>0){
    for (size_t i=0;i<k;i++){
        if (temp_size>0){
            m[i]++;
            temp_size--;
        }else{
            break;
        }
    }
  }
  int idx = mSize-1;
  vector<vector<T>> ans;
  for (auto x : m){
    vector<T> temp;
    for (int i=0;i<x.second;i++){
        temp.push_back(mData[idx]);
        idx--;
    }
    ans.push_back(temp);
  }
  return ans;
}
#endif
