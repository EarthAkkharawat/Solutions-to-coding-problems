#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
using std::swap;
template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b)
{
	// write your code here
	if (mSize==0 || a==b) return a;
	auto ait = a, bit = b;--bit;
	while (ait != bit){
		swap(*ait,*bit);
		++ait;
		if (ait == bit) break;
		--bit;
	}
	return a;
}

#endif
