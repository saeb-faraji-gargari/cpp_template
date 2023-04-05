//#include "stack1.hpp"
#include "stack2.hpp"
#include <iostream>
#include <string>

int main()
{
  Stack<int>         intStack;       // stack of ints    hatman bayad type moshakhas bashad masalan int dar Stack<int>
  Stack<std::string> stringStack;    // stack of strings
  
  Stack<double>         doubleStack;       // stack of double
  
  Stack<double>         doubleStack2;

  std::cout << "doubleStack object run ----------------: " << '\n';

  // manipulate int stack
  intStack.push(7);
  std::cout << "intStack.top(): " << intStack.top() << '\n';
  
  doubleStack.push(7.58);
  doubleStack.push(85.67);
  doubleStack.push(14.14);
  std::cout << "doubleStack.top(): " << doubleStack.top() << '\n';
  
  
  double a=55.89;
  double b=54.90;
  
  doubleStack.add(a,b);
  
  double sumation= doubleStack.add(a,b);
  
  std::cout << "sumation= doubleStack.add(a,b): " << sumation << '\n';
  
  doubleStack.print();

  // manipulate string stack
  stringStack.push("hello");
  std::cout << stringStack.top() << '\n';
  stringStack.pop();
  
  std::cout << "doubleStack2 object run ----------------: " << '\n';
  
  doubleStack2.push_two_element(5.5,8.98);
  doubleStack2.print();

  
}
