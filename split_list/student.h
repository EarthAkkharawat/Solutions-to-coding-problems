void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if (mSize==0) return;
    int n = (mSize+1)/2;
    auto it = begin();
    for (int i=0;i<n -1;++i) {++it;}
    auto at = it.ptr->next;
    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev = it.ptr;
    it.ptr->next = list1.mHeader;

    list2.mHeader->prev->next = at;
    at->prev = list2.mHeader->prev;
    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next =  list2.mHeader;

    mHeader->prev = mHeader;
    mHeader->next = mHeader;


    list1.mSize+=n;
    list2.mSize+=mSize-n;
    mSize=0;

}
