/**
 * C++ 标准库提供了丰富的功能，其中 <list> 是一个非常重要的容器类，用于存储元素集合，支持双向迭代器。
 * <list> 是 C++ 标准模板库（STL）中的一个序列容器，它允许在容器的任意位置快速插入和删除元素。
 * 与数组或向量（<vector>）不同，<list> 不需要在创建时指定大小，并且可以在任何位置添加或删除元素，而不需要重新分配内存。
 */

/**
 * 一个使用 <list> 的简单示例，包括创建列表、添加元素、遍历列表和输出结果。
 */
#include <list>
#include <iostream>

int test_list() {
    // 创建一个整数类型的列表
    std::list<int> numbers;

    // 向列表中添加元素
    numbers.push_back(10); 
    numbers.push_back(20); 
    numbers.push_back(30);

    // 访问并打印列表的第一个元素
    std::cout << "First element: " << numbers.front() << std::endl;

    // 访问并打印列表的最后一个元素
    std::cout << "Last element: " << numbers.back() << std::endl;

    // 遍历列表并打印所有元素
    std::cout << "List elements: ";
    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    // 删除列表中的最后一个元素
    numbers.pop_back();

    // 再次遍历列表并打印所有元素
    std::cout << "List elements after pop_back: ";
    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}

int main() {
    test_list();
    // test_list();
    return 0;
}