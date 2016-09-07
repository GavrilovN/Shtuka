#pragma once

template <typename T>
class stack
{
public:
	stack();
	size_t count() const;
	void push(T const &);
	T pop();
private:
	T * array_;
	size_t array_size_;
	size_t count_;
};
