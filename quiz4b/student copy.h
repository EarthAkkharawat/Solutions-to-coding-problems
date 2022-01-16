#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
CP::map_bst<KeyT, MappedT, CompareT>::cons(std::vector<int> v)
{
	// write your code here
	mLess = CompareT();
	int size = v.size();
	int m  size/2;
	mRoot = new node(v[m],nullptr,nullptr,nullptr);
	while(m>0){
		for(int i=m/2;i<size;i+=m){
			insert({v[i],int()});
		}
		m=m/2;
	}
	
}

#endif
