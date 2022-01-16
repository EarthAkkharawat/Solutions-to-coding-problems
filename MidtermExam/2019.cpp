//19.44 22.48

1.1 for (auto &e:x){
    cout<<e.first;
}

1.2 for (int i =0;i<x.size();++i){
        for (auto &e:q.front()){
            cout<<e;
        }
        q.pop();
}

1.3 for (auto it = x.begin();it!=x.end();++it){
        cout<<it->first<<(it->second).second;
}

1.4 for (auto &e:x){
        for (auto &m:e){
            cout<<(m.second).top();
            (m.second).pop();
        }

}

2. n  n  n  n**2  n

3.1 v.end()
3.2 i
3.3 pop();
3.4 i = i
3.5 find(i);

4.1 v.begin()+1;
4.2 v.begin()+1       v.end()
4.3 auto &x:s
4.4 q.size()>3
4.5  1   pq.top();
4.6  m.erase(m.begin()); // ********************

6   stack<T> ss(s2);/
    if (mSize == 0 && s2.empty()) return false;/
    if (mSize == 0 || !s2.empty()) return mSize < s2.size();/
    if (mData[mSize-1] != s2.top()) return mData[mSize-1] < s2.top();
    ss.pop();
    for (int i = mSize-2;i>=0;++i){
        if (ss.empty()) return false;/
        if (mData[i] != ss.top()) {
            return mData[i] < ss.top();/
        }
        ss.pop();/
    }
    if (!ss.empty()) return true;/

7.  queue<T> newq(q);/
    int s = newq.size();/
    int c = newq.capacity();/
    mData = new T[c]();/
    mSize = s;/
    mCap = c;/
    for (int i =0;i<s;++i){
        mData[mSize-i-1] = newq.front();/
        newq.pop();/
    }/


8.1  map<string, int> mn; ใช้เก็บสินค้าชื่อ item เเละจำนวนของมัน เลือกใช้ map เพราะง่ายเเละเร็วต่อการเก็บเเละค้นเเละเหมาะสมกับข้อมูลที่ไม่ซ้ำกันเลย
     map<string, priority_queue<pair<int, string>> ใช้เก็บคีย์เปป็น item เเละ mapped value เป็น prioriy_queueที่เก็บ pair โดยมี first เป็น ราคา bid(price) เเละ seconf เป็น ชื่อคน bid(user) โดย pq อันนี้จะใช้ custom comparator เพื่อให้ยังรักษาอันดับของการ bid ไว้กรณี bid ราคาเท่ากัน  ใช้เพราะค้นหากลุ่มคนที่bid item ชิ้นนี้ได้เร็ว เเละเหมาะสมกับการจัดอันดับราคาเพื่อ close_auction เเละเก็บ/ขอดู ข้อมูลได้เร็ว



8.2  class MultiAuction{
        protected:
            auto comp = [](const pair<int,string> &p1, const pair<int,string> &p2){//***************************
                return p1.first < p2.first;
            };

            map<string, int> mn;
            map<string, priority_queue<pair<int, string>, vector<pair<int,string>>, decltype(comp)>> order(comp);

        public:
            void open_auction(string item, int qty){
                mn[item] = qty;
            }
            void add_bidding(string user, string item, int price){
                order[item].push(make_pair(price, user));
            }
            vector<pair<string,int>> close_auction(string item){
                vector<pair<string,int>> result;
                auto it = order.find(item);
                if (it!= order.end()){ //check does item really exist
                    for (int i =1;i<=(it->second).size();++i){
                        pair<int, string> tem = (it->second).top();
                        if (ask_user_confirmation(tem.second, item, tem.first)){
                            if (mn[item] - 1 < 0) break;
                            --mn[item];
                            result.push_back(make_pair(tem.second,i));
                            (it->second).pop();
                        }
                        (it->second).pop();
                    }
                }
            }

}

9.  stack<T> result; set<T> check; vector<T> tem;
    int s = size()+s2.size();
    for (auto &x: (*this)){
        check.insert(x);
    }
    while (!s2.empty()){
        if (check.find(s2.top()) == check.end()){
            tem.push_back(s2.top());
        }
        s2.pop();
    }/
    for (int i = tem.size()-1;i>=0;--i){
        result.push_back(tem[i]);
    }
    tem.clear();/
    for (auto it = check.begin(); it!= check.end();++it){
        result.push(*it); // !!!ผิด อย่ามึน
    }
    return result;/
    

10. vector<T> arr; int e = 0;/
    for (int i = 0;i<mSize;++i){
        for (int j = 0;j<e;++j){
            if (mData[i] == arr[j]) break;
            else {
                arr.push_back(mData[i]); ++e;/
            }
        }
    }
    return arr;/

11.  bool   empty() const {
        for (auto &x:v){
            if (!x.empty()) return false;
        }
        return true;
    }

    size_t size()  const { 
        int s= 0;
        for (auto &x:v){
            s+=x.size();
        }
        return s;
    }

    const T& top() const { 
        for (auto &x:v)
            if (!x.empty()){
                return (x.front()).first;
            }
    }

    void push(const T& e) { 
        v[v.size()-1].push(make_pair(e, v.size()-1));
    }

    void pop() {
        for (auto &x:v)
            if (!x.empty()){
                x.pop();
                break;
            }

12. void insertAt(int k, const CP::queue<T>& q) {
        queue<T> nq(q);/
        int c = mCap+q.size();
        T* arr = new T[c]();
        int e = 0;
        for (int i =0;i<k;++i){
            arr[e++] = mData[(mFront+i)%mCap];
        }
        for (int i = 0;i<nq.size();++i){
            arr[e++] = nq.front();
            nq.pop();
        }
        for (int i = k;i<mSize;++i){
            arr[e++] = mData[(mFront+i)%mCap];
        }
        delete [] mdata;
        mData = arr;
        mSize+=q.size();
        mFront = 0;
        mCap = c;

13. void removeAt(int k, int m) {
        int po = mSize - k - m;
        for (int i = po;i<mSize-m;++i){
            mData[i] = mData[i+m];
        }
        mSize-=m;


