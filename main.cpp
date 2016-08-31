#include <iostream>

#include "binarysearch.hpp"

int main() {
  int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
  std::cout << binSearch(arr, 10, 8) << std::endl;

  return 0;
}
