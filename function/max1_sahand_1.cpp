
#include <iostream>
#include <string>

#include "max1_sahand_1.hpp"

//#include "max1_sahand_2.hpp"   // Error midahad type return ra nemishvad intor tarif kard 


/* ------ "max1_sahand_1.hpp" ------------------

template<typename T1, typename T2>
T2 max (T1 a, T2 b)
{
  // if b < a then yield a else yield b
  return  b < a ? a : b;
}

*/


/* ------ "max1_sahand_2.hpp" ------------------ Error midahad type return ra nemishvad intor tarif kard 

template<typename RT, typename T1, typename T2>
RT max (T1 a, T2 b)
{
  // if b < a then yield a else yield b
  return  b < a ? a : b;
}

*/


int main()
{
  int i = 42;
  std::cout << "max(7,i):   " << ::max(7,i) << '\n';
  
  std::cout << "max(7.45,i):   " << ::max(7.45,i) << '\n';
  
  std::cout << "max(897.45,i):   " << ::max(897.45,i) << '\n';  // khorji 897 hast chon type T2 ke inja int hast barmigardanad
  
  std::cout << "max(i,900.5):   " << ::max(i,900.5) << '\n';    // khorji 900.5 hast chon type T2 ke inja double hast barmigardanad



  double f1 = 3.4;
  double f2 = -6.7;
  std::cout << "max(f1,f2): " << ::max(f1,f2) << '\n';

  std::string s1 = "mathematics";
  std::string s2 = "math";
  std::cout << "max(s1,s2): " << ::max(s1,s2) << '\n';
}



/* Khoroji result 

max(7,i):   42
max(7.45,i):   42
max(897.45,i):   897
max(i,900.5):   900.5
max(f1,f2): 3.4
max(s1,s2): mathematics

*/
