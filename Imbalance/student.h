int get_max_height(node *n){
    if (n==nullptr) return -1;
    return 1+std::max(get_max_height(n->left), get_max_height(n->right));
}

void recur(node * n, int &a,node* &ans){
    if (n==nullptr) return;
    recur(n->right,a,ans);
    int d = abs(get_max_height(n->left)-get_max_height(n->right));
    if (d>=a) {
        a=d;
        ans = n;
    }
    recur(n->left,a,ans);
}

KeyT getValueOfMostImbalanceNode() {
    if (mSize==1) return mRoot->data.first;
    int a = abs(get_max_height(mRoot->left)-get_max_height(mRoot->right));
    node *ans = mRoot;
    recur(mRoot,a,ans);
    return ans->data.first;
}
