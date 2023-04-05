#include "max1.hpp"
#include <iostream>
#include <string>

int main()
{
  int i = 42;
  std::cout << "max(7,i):   " << ::max(7,i) << '\n';
  
  //std::cout << "max(7.45,i):   " << ::max(7.45,i) << '\n';  +++ Error midahd cho dar "max1.hpp" darim
  
 // template<typename T>
 // T max (T a, T b)
 // {
//  return  b < a ? a : b;
  // }
  
  // a va b bayad az yek type bashand

  


  double f1 = 3.4;
  double f2 = -6.7;
  std::cout << "max(f1,f2): " << ::max(f1,f2) << '\n';

  std::string s1 = "mathematics";
  std::string s2 = "math";
  std::cout << "max(s1,s2): " << ::max(s1,s2) << '\n';
}
