#pragma once 

#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack( void );
	MutantStack( const MutantStack& copy );
	MutantStack& operator=( const MutantStack& other );
	~MutantStack( void );
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	
	iterator begin( void );
	iterator end( void );
	const_iterator begin( void ) const;
	const_iterator end( void ) const;
};

#include "MutantStack.tpp"