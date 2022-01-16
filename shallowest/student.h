#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
  if (n==nullptr) return -1;
  return 1 + std::min(shallowest_leaf((n->left==nullptr) ? n->right:n->left),shallowest_leaf((n->right==nullptr) ? n->left:n->right));
}
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  //write your code here
  if (mRoot == nullptr) return -1;
  if (mSize==1) return 0;
  return shallowest_leaf(mRoot);
}

#endif

