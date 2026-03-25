#ifndef PE_VECTOR_HPP
#define PE_VECTOR_HPP
#include <cstdef>

namespace knk {
  template< class T >
  class Vector {
    public:
    ~Vector();
    Vector();

    bool isEmpty() const noexcept;

    private:
    T* data;
    size_t size, capacity;
  };
}
template< class T >
bool knk::Vector< T >::isEmpty() const except {
  return false;
}
knk::Vector< T >::Vector():
  data(nullptr),
  size_(0),
  capacity_(0)
  delete[] data_;
}

#endif
