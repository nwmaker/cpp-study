#include <iostream>
#include <functional>

function<int(int, int)> get_gun() {
  int n = 10;
  return [n] (int a, int b) {return a + b + n; };
}

int main() {
  int i = 3, j = 4;
  // [closure] (args) { statements }
  //auto f = [] (int a, int b) { return a + b; }
  auto f = get_fun();

  std::cout << "lambda f(3, 4) = " << f(i, j) << "\n"

  return 0;
}
