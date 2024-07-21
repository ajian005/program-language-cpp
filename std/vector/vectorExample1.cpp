/**
 * C++ 标准库（Standard Template Library, STL）是 C++ 的一个重要组成部分，它提供了一组通用的模板类和函数，用于处理数据集合。
 * <vector> 是 STL 中的一个容器类，用于存储动态大小的数组。
 * <vector> 是一个序列容器，它允许用户在容器的末尾快速地添加或删除元素。
 * 与数组相比，<vector> 提供了更多的功能，如自动调整大小、随机访问等。
 */
#include <vector>
#include <iostream>

/**
 * 一个使用 <vector> 的简单示例，包括输出结果。
 */
int test_vector() {
    // 声明一个存储整数的 vector
    std::vector<int> numbers;

    // 添加元素
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // 输出 vector 中的元素
    std::cout << "Vector contains: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
        
    // 添加更多元素
    numbers.push_back(40);
    numbers.push_back(50);

    // 再次输出 vector 中的元素
    std::cout << "After adding more elements, vector contains: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // 访问特定元素
    std::cout << "The second element is: " << numbers[0] << std::endl;

    // 清空 vector
    numbers.clear();
    
    // // 检查 vector 是否为空
    if (numbers.empty()) {
        std::cout << "The vector is empty. " << std::endl;
    }

    return 0;
}

int main() {
    test_vector();
    return 0; 
}