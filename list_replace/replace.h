void replace(const T &x, list<T> &y)
{
	// write your code here
	CP::list<T> l;
	for (auto it = begin(); it!=end();++it){
		if (*it != x){
			l.push_back(*it);
		}else{
			for (auto e = y.begin(); e!=y.end();++e){
				l.push_back(*e);
			}
		}
	}
	*this=l;

}
