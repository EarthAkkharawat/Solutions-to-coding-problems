#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
		  
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* p = mRoot;
  node* lastResult = NULL; //last node that will be in the result
  node* lastUs= NULL; //last node that will still be here

  bool found = false;

  while(p != NULL && !found) {
    if (p->data.first >= val) {
      //this node goes to result, go left
      if (lastResult == NULL) {
        result.mRoot = p;
        result.mRoot->parent = NULL;
      } else {
        lastResult->left = p;
        p->parent = lastResult;
      }

      if (p->data.first == val) {
        if (lastUs == NULL) {
          mRoot = p->left;
          if (mRoot != NULL) mRoot->parent = NULL;
          lastUs = mRoot;
        } else {
          lastUs->right = p->left;
          if (p->left != NULL) p->left->parent = lastUs;
        }
        found = true;
        p->left = NULL;
        break;
      }

      lastResult = p;
      p = p->left;
      if (p == NULL) {
        if (lastUs == NULL) {
          mRoot = NULL;
        } else {
          lastUs->right = NULL;
        }
      }
    } else if (p->data.first < val) {
      //this node is still here, go right
      if (lastUs == NULL) {
        mRoot = p;
        mRoot->parent = NULL;
      } else {
        lastUs->right = p;
        p->parent = lastUs;
      }
      lastUs = p;
      p = p->right;
      if (p == NULL) {
        if (lastResult == NULL)
          result.mRoot = NULL;
        else
          lastResult->left = NULL;
      }
    }
  }

  return result;
}

#endif