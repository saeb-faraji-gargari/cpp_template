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
	
	void push_two_element(T const& elem_1, T const& elem_2);
};

template<typename T>
void Stack<T>::push (T const& elem)
{

    elems.push_back(elem);     // append copy of passed elem

}

template<typename T>
void Stack<T>::push_two_element (T const& elem_1, T const& elem_2)
{
    elems.push_back(elem_1);     // append copy of passed elem
	elems.push_back(elem_2);     // append copy of passed elem
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
	
	std::cout << "Member function print ++++++++ " << '\n';
	
    std::cout << "elems is: " << '\t';          // print elems
    //std::cout << "elems is: " << elems;          // print elems
	
	for (size_t i=0; i< elems.size(); i++)
	{
		
    std::cout << elems[i] << ' ';
	
	}
	
	std::cout << '\n';
	
	
	T elems_front=elems.front(); 

    T elems_back=elems.back(); 	

    std::cout << "elems.front : "  << elems_front << '\n'; 	
	std::cout << "elems.back : "  << elems_back << '\n'; 

//------------------ print the lements - method 1 ----------------------------------
    
	std::cout << "vector elements are (method 1):   ";
	
	for (auto it = elems.begin();it != elems.end(); ++it)
	{
        std::cout << ' ' << *it;	
    }
	
	std::cout << '\n';

//------------------ print the lements - method 2----------------------------------
	
	std::vector<T> elems_2=elems;
	
	std::cout << "vector elements are (method 2): albate in reverse minevisad   ";

	//int kk=0;
	while (!elems_2.empty()) 
	{
 			std::cout << elems_2.back() << '\t';
			elems_2.pop_back();                               //  baraye hazfe kardane akharin element hast 
			
 			//kk=kk+1;
			
			//std::cin.ignore();
			
	}

	std::cout << '\n';

//------------------ print the lements - method 3------------------ Error ----------------   
	
	//std::vector<int>::iterator it;       //  dorost nist chon T type hast na int faghat
	//std::vector<T>::iterator it_elems1;    // Error chon it_elems1 typename hat va bayad it_elems1 neveshteshavad 
    //auto std::vector<T>::iterator it_elems1_1;      //Error
	typename std::vector<T>::iterator it_elems1_2;
	
	typename std::vector<T>::const_iterator it_elems = elems.begin();
	auto it_elems_2 = elems.begin();

	//elems::iterator it;
	//it = elems.begin();

	//std::cout << "typename std::vector<T>::iterator it_elems1_2; (cout *it_elems1_2): " << *it_elems1_2 << '\n' << "typename std::vector<T>::const_iterator it_elems = elems.begin(); (cout << *it_elems) : "  << *it_elems << '\n';    //Error 
	std::cout << "auto it_elems_2 = elems.begin(); : (cout << *it_elems_2 ) " << *it_elems_2   <<'\n';
	
	
    //std::cout << " *it : "  << *it << '\n';   //Error 

	
	/*for (elems::const_iterator i = elems.begin(); i != elems.end(); i++)      //Error
	{
    std::cout << *i << ' ';
	}*/
}