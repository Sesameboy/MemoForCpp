#pragma  once
#include <array>
#include<iostream>
#include<vector>

namespace init_pattern{
    void init_vector(){
        std::vector<int> v1; // empty vector
        std::vector<int> v2(5); // vector with 5 elements
        std::vector<int> v3(5, 10); // vector with 5 elements with value 10
        std::vector<int> v4{1, 2, 3, 4, 5}; // vector with 5 elements with value 1, 2, 3, 4, 5
        std::vector<int> v5(v4); // vector with elements of v4
        std::vector<int> v6(v4.begin(), v4.end()); // vector with elements of v4
        std::vector<int> v7 = {1, 2, 3, 4, 5}; // vector with 5 elements with value 1, 2, 3, 4, 5
        std::cout << "v1: " << v1.size() << std::endl;
        std::cout << "v2: " << v2.size() << std::endl;

        std::array<int, 8> a1{1}; // array with 8 elements, first element is 1, rest are 0
        std::vector<int> v8(a1.begin() + 1, a1.begin() + 5); // vector with sequence of a1
        std::cout << "v8: " << v8.size() << std::endl;// {1-5} the result is 4

        int a2[] = {1, 2, 3, 4, 5};
        std::vector<int> v9(std::begin(a2), std::end(a2)); // vector with elements of a2

        // Initialize vector<char> from string
        std::string str = "hello";
        std::vector<char> v10(str.begin(), str.end()); // vector with characters of str
        std::cout << "v10: " << v10.size() << std::endl;
    }
}
