#include <iostream>

int foo() {
  return 5;
}

int goo() {
  return 6;
}

int bar(int x) {
  return x;
}

int main() {
  int (* fptr)() = foo;
  int (* funptr)(int) = bar;

  std::cout << "foo called: " << fptr();
  std::cout << "bar called: " << funptr(7);

  fptr = goo;
  std::cout << "goo called: " << fptr();

  return 0;  
}

