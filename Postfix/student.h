#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;//14.25-14.51

int cal(int a, int b, int oper){
    if (oper == 0) return a+b;
    else if (oper == 1) return a-b;
    else if (oper == 2) return a*b;
    else return a/b;
}

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<int> s;
  int right,left,result;
  for (int i =0;i<v.size() ;++i){
    if (v[i].first == 1){
        s.push(v[i].second);
    }else{
        right = s.top(); s.pop();
        left = s.top(); s.pop();
        result = cal(left,right, v[i].second);
        s.push(result);
    }
  }
  return s.top();
}

#endif
