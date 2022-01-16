#include <iostream>
#include "map_bst.h"
#include "student.h"
#include <set>
#include <vector>

std::set<int> destroyed;


int main() {
  std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);
  int n;
  //CP::map_bst<int,int> m,left,right;
  //std::cin >> n;
  int k;
  for (int i = 0;i < n;i++) {
    //std::cin >> k;
    //m[k] = i;
  }
  //auto t = m.subtree(left,right);
  std::vector<int>  v = {0,1,2,3,4,5};
  //CP::map_bst<int,int> cons(v);

  //cons.print();
  //cons.print_key_preorder();
  //m.print_key_inorder();
  //cons.print_key_postorder();
  CP::map_bst<int,int> mm;
  mm[5] = 0;mm[9] = 0;mm[0] = 0;mm[1] = 0;mm[8] = 0;mm.print_key_inorder();
  //std::cout<<cons.get_height();
  // std::cout << "return: " << t.first << ":" << t.second << "\n";
  // std::cout << "main tree:  "; m.print();
  // std::cout << "left tree:  "; left.print();
  // std::cout << "right tree: "; right.print();
}
