#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>

class ValueNotFoundException : public std::exception
{
public:
    ValueNotFoundException() {}
    ValueNotFoundException(const ValueNotFoundException& other) : std::exception(other) {}
    ValueNotFoundException& operator=(const ValueNotFoundException&) { return *this; }
    virtual ~ValueNotFoundException() throw() {}

    virtual const char* what() const throw() {
        return "Error: Value not found.";
    }
};

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);  
    if (it == container.end()) {
        throw ValueNotFoundException();
    }
    return it;
}

#endif
