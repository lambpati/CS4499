#pragma once

template <class T>
class Accum {
  private:
    T total;
  public:
    Accum(T start) : total(start) {};
    T getTotal() const { return total; }
    T operator +=(T const& t) { return total = total + t; }
}
