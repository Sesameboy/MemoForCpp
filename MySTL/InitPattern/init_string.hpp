#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace init_pattern {
    void init_string() {
        // 1. 默认初始化
        std::string s1;
        std::cout << "s1: " << s1 << std::endl;

        // 2. 使用C字符串初始化
        std::string s2("Hello, World!");
        std::cout << "s2: " << s2 << std::endl;

        // 3. 使用另一个std::string对象初始化
        std::string s3(s2);
        std::cout << "s3: " << s3 << std::endl;

        // 4. 使用部分C字符串初始化
        std::string s4("Hello, World!", 5); // 只取前5个字符
        std::cout << "s4: " << s4 << std::endl;

        // 5. 使用重复字符初始化
        std::string s5(10, 'A'); // 10个'A'字符
        std::cout << "s5: " << s5 << std::endl;

        // 6. 使用迭代器范围初始化
        std::vector<char> vec = {'H', 'e', 'l', 'l', 'o'};
        std::string s6(vec.begin(), vec.end());
        std::cout << "s6: " << s6 << std::endl;

        // 7. 使用std::string的子串初始化
        std::string s7(s2, 7, 5); // 从s2的第7个字符开始，取5个字符
        std::cout << "s7: " << s7 << std::endl;

        // 8. 使用vector<char>初始化string
        std::vector<char> vec2 = {'W', 'o', 'r', 'l', 'd'};
        std::string s8(vec2.begin(), vec2.end());
        std::cout << "s8: " << s8 << std::endl;
    }
}
