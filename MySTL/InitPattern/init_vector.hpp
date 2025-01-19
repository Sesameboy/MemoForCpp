#pragma  once
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
    }
}
