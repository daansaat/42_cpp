#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <list>

template<typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack();
	MutantStack(const MutantStack& src);
	MutantStack& operator=(const MutantStack& rhs);
	virtual ~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};


template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}


template<typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : std::stack<T>(src) {}


template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& rhs) {
	std::stack<T>::operator=(rhs);
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack() {}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

#endif
