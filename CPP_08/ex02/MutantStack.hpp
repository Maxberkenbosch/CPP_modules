#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
    MutantStack() {};
    ~MutantStack() {};
    
    MutantStack( const MutantStack& other )
    {
        *this = other;
    }
    
    MutantStack& operator=( const MutantStack& obj )
    {
        *this = obj;
        return (*this);
    }
    
    typedef T* iterator;

    iterator    end()
    {
        return (&this->top() + 1);
    }

    iterator    begin()
    {
        iterator iter = &this->top();
		for (size_t i = 1; i < this->size(); i++) 
        {
				iter--;
		}
		return iter;
    }
};


#endif