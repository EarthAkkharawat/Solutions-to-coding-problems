#include "stack.h"
#include "queue.h"
//20.21 20.41
namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        int Cap=mSize+s.mSize;int j=0;
        T *arr = new T[Cap]();
        for (int i =0;i<s.mSize;++i){
            arr[j++] = s.mData[i];
        }
        for (int e =0;e<mSize;++e){
            arr[j++] = mData[e]; 
        }
        delete [] mData;
        mData=arr; mSize = Cap;mCap=Cap;

    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        int Cap=mSize+q.mSize;int e=0;
        T *arr = new T[Cap]();
        for (int i =q.mSize-1;i>=0;--i){
            arr[e++] = q.mData[i];
        }
        for (int i =0;i<mSize;++i){
            arr[e++] = mData[i]; 
        }
        delete [] mData;
        mData=arr; mSize += q.mSize;mCap = Cap;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        int Cap = mSize+s.mSize;int j=0;
        T *arr = new T[Cap]();
        for (int i =0;i<mSize;++i){
            arr[j++] = mData[i];
        }
        for (int e =s.mSize-1;e>=0;--e){
            arr[j++] = s.mData[e];
        }
        delete [] mData;
        mData=arr; mSize = Cap; mCap = Cap;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        int j=0;
        int cap = mSize+q.mSize;
        T *arr = new T[cap]();
        for(int i = 0; i < mSize; i++){
            arr[j++] = mData[i];
        }
        for(int i = 0; i < q.mSize; i++){
            arr[j++] = q.mData[i];
        }

        delete [] mData;
        mData = arr;
        mSize = cap;
        mCap = cap;
        //mFront = 0;
    }
}
