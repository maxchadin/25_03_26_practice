#ifndef PE_VECTOR_HPP
#define PE_VECTOR_HPP
#include <cstdef>

namespace knk {
  template< class T >
  class Vector {
    public:
    ~Vector();
    Vector();

    private:
    T* data;
    size_t size, capacity;
  };
}
template< class T >
knk::Vector< T >::Vector():
  data(nullptr),
  size_(0),
  capacity_(0)
{}
knk::Vector< T >::~Vector(){
  delete[] data_;
}

#endif
