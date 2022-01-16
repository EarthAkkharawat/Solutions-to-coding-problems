#include <queue>
template <typename A, typename B, typename C>
size_t CP::map_bst<A, B, C>::leaves_count()
{
  size_t l = 0;
  std::queue<node *> q;
  q.push(mRoot);
  while (q.size())
  {
    node *p = q.front();
    q.pop();
    if (!(p->left || p->right))
      l++;
    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }
  return l;
}
