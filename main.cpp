#include "pe-vector.hpp"
#include <iostream>

bool test1()
{
  knk::Vector< int > v;
  return true;
}

bool test2()
{
  Vector< int > v;
  return v.isEmpty();
}

int main()
{
  using test_t = bool(*)();
  test_t tests[] = {
    test1,
    test2
  };
  constexpr size_t count = sizeof(tests) / sizeof(test_t)
  for (size_t i = 0; i < count; ++i){
    bool r = tests[i]()
    if (!r) {
      std::count << "Failed: " << i << "\n";
    }
  }
}
