void shift(int k) {
	// TODO: Add your code here
	int s = mSize;
	k = k%s;
	if (k<0) k = (s+k)%s;
	auto n = mHeader->next;
	for (int i=0;i<k;++i){
		n=n->next;
	}
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	//mHeader->next->prev = mHeader->prev;
	mHeader->next = n;
	//n->prev->next = mHeader;
	mHeader->prev = n->prev;
	n->prev->next = mHeader;
	n->prev = mHeader;
	
	


}
