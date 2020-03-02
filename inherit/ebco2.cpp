#include <iostream>

class Empty {
  using Int = int;  // type alias members don't make a class nonempty
};

class EmptyToo : public Empty {};

class NonEmpty : public Empty, public EmptyToo {};

int main() {
  NonEmpty x, y;
  Empty a;
  EmptyToo b;
  std::cout << "x addr: " << &x << "\ny addr: " << &y << std::endl;
  std::cout << "a addr: " << &a << std::endl;
  std::cout << "b addr: " << &b << std::endl;
  std::cout << "sizeof(Empty):    " << sizeof(Empty) << '\n';
  std::cout << "sizeof(EmptyToo): " << sizeof(EmptyToo) << '\n';
  std::cout << "sizeof(NonEmpty): " << sizeof(NonEmpty) << '\n';
}
