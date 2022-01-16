#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;
// 15.16
template <typename T, typename Comp>
size_t CP::priority_queue<T, Comp>::get_rank(size_t pos) const
{
	// write your code here
	// CP::priority_queue<T, Comp> pq(*this);
	int c = 0;
	// while (pq.top()!=mData[pos]){
	// 	c+=1;
	// 	pq.pop();
	// }
	T a = mData[pos];
	for (int i =0;i<mSize;++i){
		if (mLess(a,mData[i])) ++c;
	}
	return c;

}

#endif
