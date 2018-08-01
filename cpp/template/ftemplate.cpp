#include <iostream>

// tempate parameter declaration
// only one template type below, parameter passed by value
template <typename T>
T max(T x, T y) {
  return (x > y) ? x : y;
}

template <typename T>
const T& rmax(const T& x, const T& y)
{
  return (x > y) ? x : y;
}

template <class T>
T average(T *array, int length)
{
    T sum = 0;
    for (int count=0; count < length; ++count)
        sum += array[count];
 
    sum /= length;
    return sum;
}

int main() {
  int x = 5, y = 6;
  double a = 12.9, b = 23.4;

  std::cout << "max int: " << max(x, y);
  std::cout << "max double: " << max(a, b);
  std::cout << "ref max double: " << rmax(a, b) << "\n";

  int array1[] = { 5, 3, 2, 1, 4 };
  std::cout << average(array1, 5) << "\n";

  return 0;
}
