#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main() {
    // vector container
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    try {
        std::vector<int>::iterator it = easyfind(vec, 3);  
        std::cout << "Found in vector container: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // list container
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    try {
        std::list<int>::iterator it = easyfind(lst, 20);  
        std::cout << "Found in list container: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // deque container
    std::deque<int> deq;
    deq.push_back(100);
    deq.push_back(200);
    deq.push_back(300);
    deq.push_back(400);
    try {
        std::deque<int>::iterator it = easyfind(deq, 400);  
        std::cout << "Found in deque container: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    // not found case
    try {
        std::vector<int>::iterator it = easyfind(vec, 500);  
        std::cout << "Found in vector container: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
