#include "Header.h"

template < typename T>
stack<T>::stack()
{
	array_size_ = 512;
	count_ = 0;
	array_ = new T[512/sizeof (T)];
}

template < typename T>
size_t stack<T>::count() const
{
	const size_t c = count_;
	return c;
}

template < typename T>
void stack<T>::push(T const &c)
{
	if ((count_ + 1) * sizeof(T)> 512) return;
	array_[count_] = c;
	count_++;
}

template < typename T>
T stack<T>::pop()
{
	if (!count_) return;
	count_--;
	return array_[count_ + 1];
}