#include <iostream>
#include "binHeap.h"

int main()
{
  MaxHeap<int> h1;
  h1.push(2);
  h1.push(7);
  h1.push(4);
  h1.push(1);
  h1.push(3);
  h1.push(8);
  h1.print(); std::cout << std::endl;
  h1.pop();
  h1.print(); std::cout << std::endl;
  h1.pop();
  h1.print(); std::cout << std::endl;
  h1.pop();
  h1.print(); std::cout << std::endl;

  std::vector<int> a{1,3,7,3,4,9,1};
  MaxHeap<int> h2(a.begin(), a.end());
 // h2.print();
  std::cout << std::endl;


  return 0;
}
