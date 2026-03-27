#ifndef SPAN_HPP
# define SPAN_HPP

// I thought vector container is suitable for this
#include <vector>
#include <stdexcept>

class Span {
private:
    unsigned int _n;
    std::vector<int> _stock;

public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(const Span& cp);
    Span& operator=(const Span& cp);

    void addNumber(int n);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end) {
        std::vector<int> tmp(begin, end);
        if (tmp.size() > _n - _stock.size()) {
            throw std::runtime_error("Span is full");
        }
        _stock.insert(_stock.end(), tmp.begin(), tmp.end());
    }
};

#endif
