#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n)
{
	// write your code here
	if (n == NULL)
		return 0;
	return 1 + process(n->left) + process(n->right);
}

template <typename KeyT, typename MappedT, typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(map_bst<KeyT, MappedT, CompareT> &left, map_bst<KeyT, MappedT, CompareT> &right)
{
	// write your code here
	if (mRoot == nullptr)
		return std::pair<KeyT, MappedT>();
	if (mSize == 1)
		return mRoot->data;
	left.clear();
	right.clear();

	if (mRoot->left != nullptr)
	{
		left.mRoot = mRoot->left;
		mRoot->left->parent = nullptr;
		mRoot->left = nullptr;
		left.mSize = process(left.mRoot);
	}
    if (mRoot->right != nullptr){
		right.mRoot = mRoot->right;
		mRoot->right->parent = nullptr;
		mRoot->right = nullptr;
		right.mSize = process(right.mRoot);
	}
	mSize = 1;
	return mRoot->data;
}

#endif
