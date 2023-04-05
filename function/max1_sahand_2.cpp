
#include <iostream>
#include <string>


#include "max1_sahand_2.hpp"   // Error eslah shode ba deduction , deduction yani moshakhas kardane type dar dakhele code asli main.



/* ------ "max1_sahand_2.hpp" ------------------  

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
  //std::cout << "max(7,i):   " << ::max(7,i) << '\n';             // in error midahad deduction bayad estefade shavad
  std::cout << "max(7,i):   " << ::max<int>(7,i) << '\n';             // OK: return type is double, T1 and T2 are deduced. in <int> type RT deduct karde
  
  //std::cout << "max(7.45,i):   " << ::max(7.45,i) << '\n';       // in error midahad deduction bayad estefade shavad
  std::cout << "max<double>(7.45,i):   " << ::max<double>(7.45,i) << '\n';       // OK: return type is double, T1 and T2 are deduced. in <double> type Rt ra deduct karde

  std::cout << "max<int>(897.45,i):   " << ::max<int>(897.45,i) << '\n';  // khorji 897 hast chon type RT int hast

  //std::cout << "max(897.45,i):   " << ::max(897.45,i) << '\n';   // in error midahad deduction bayad estefade shavad
  std::cout << "max<double>(897.45, i):   " << ::max<double>(897.45, i)<< '\n'; // OK: return type is double, T1 and T2 are deduced. in <double> type Rt ra deduct karde



  std::cout << "max<double,double,int>(897.45, i):   " << ::max<double,double,int>(897.45, i)<< '\n'; // in hame ra deduct karde <double,double,int> baraye <typename RT, typename T1, typename T2>





  double f1 = 3.4;
  double f2 = -6.7;
  std::cout << "max<double>(f1,f2): " << ::max<double>(f1,f2) << '\n';

  std::string s1 = "mathematics";
  std::string s2 = "math";
  std::cout << "max<std::string>(s1,s2): " << ::max<std::string>(s1,s2) << '\n';
}



/* Khoroji result 

max(7,i):   42
max<double>(7.45,i):   42
max<int>(897.45,i):   897
max<double>(897.45, i):   897.45
max<double>(f1,f2): 3.4
max<std::string>(s1,s2): mathematics

*/
