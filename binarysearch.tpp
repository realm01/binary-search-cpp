#include <algorithm>
#include <iterator>
#include <cmath>

template<typename T>
T& binSearch(T* arr, const unsigned int& size, const T& search_item) {
  std::sort(&arr[0], &arr[size]);

  unsigned int  left = 0,
                right = size / 2,
                curr_pos = right;

  while(true) {
    if(arr[curr_pos] == search_item) {
      return arr[curr_pos];
    }else if(arr[curr_pos] > search_item) {
      curr_pos = curr_pos - abs(left - right) / 2;
      left = curr_pos;
    }else if(arr[curr_pos] < search_item) {
      curr_pos = curr_pos + abs(left - right) / 2;
      right = curr_pos;
    }
  }
}
