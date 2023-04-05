#include <vector>
#include <cassert>

#include <iostream>

template<typename T>
class Stack {
  private:
    std::vector<T> elems;      // elements

  public:
    void push(T const& elem);  // push element
    void pop();                // pop element
    T const& top() const;      // return top element
    bool empty() const {       // return whether the stack is empty
        return elems.empty();
    }
	
	T add (T &num1, T &num2) const;
	
	void print();
};

template<typename T>
void Stack<T>::push (T const& elem)
{
    elems.push_back(elem);     // append copy of passed elem
}

template<typename T>
void Stack<T>::pop ()
{
    assert(!elems.empty());
    elems.pop_back();          // remove last element
}

template<typename T>
T const& Stack<T>::top () const
{
    assert(!elems.empty());
    return elems.back();       // return copy of last element
}

template<typename T>
T Stack<T>::add (T &num1, T &num2) const
{
	T sum = num1+num2; 
    //std::cout << "num1 + num2 is: " << sum << std::endl;          // print elems
	
	return sum;
    
}


template<typename T>
void Stack<T>::print ()
{
    std::cout << "elems is: " << '\t';          // print elems
    //std::cout << "elems is: " << elems;          // print elems
	
	for (size_t i=0; i< elems.size(); i++)
	{
		
    std::cout << elems[i] << ' ';
	
	}
	
	std::cout << '\n';
	
	
	// std::vector<int>::iterator it;
	
	//it=elems.begin();                        
	
	//std::cout << "it : " << it << " *it : "  << *it << '\n'; 
	
    //std::cout << " *it : "  << *it << '\n';  

	
	/*for (elems::const_iterator i = elems.begin(); i != elems.end(); i++)      //Error
	{
    std::cout << *i << ' ';
	}*/
}