#include <stdexcept>
#include <iostream>
#include "map_bst.h"
#include "student.h"
#include <vector>



int main() {
  std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

  CP::map_bst<int,int> m;
  int n;
  std::cin >> n;
  std::cout << "Shallowest = " << m.shallowest_leaf() << std::endl;
  for (int i = 0;i < n;i++) {
    int x;
    std::cin >> x;
    m[x] = x;
    std::cout << "Shallowest = " << m.shallowest_leaf() << std::endl;
  }
/*
5
3 1 2 4 5
*/


}

