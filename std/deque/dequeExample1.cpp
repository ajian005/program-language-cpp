/**
 * 在 C++中，<deque> 是标准模板库（STL）的一部分，它提供了双端队列（double-ended queue）的实现。
 * 双端队列是一种允许在两端进行插入和删除操作的线性数据结构。<deque> 的全称是 "double-ended queue"，它在C++中以模板类的形式存在，允许存储任意类型的数据。
 */

#include <deque>
#include <iostream>

/**
 * 下面是一个使用 <deque> 的简单示例，包括元素的插入、访问和删除操作。
 */
int test_deque() {
    // 创建Deque
    std::deque<int> myDeque;

    // 插入元素
    myDeque.push_back(10); // 在末尾插入元素
    myDeque.push_back(20); // 在末尾插入元素
    myDeque.push_front(5); // 在开头插入元素

    // 访问元素
    std::cout << "Deque contains: ";
    for (int i = 0; i < myDeque.size(); i++) {
        std::cout << myDeque[i] << " ";
    }
    std::cout << std::endl;

    // // 删除元素
    myDeque.pop_back(); // 删除末尾元素
    myDeque.pop_front(); // 删除开头元素

     // 再次访问元素
     std::cout << "Deque after poping: ";
     for (int i = 0; i < myDeque.size(); i++) {
        std::cout << myDeque[i] << " ";
     }
     std::cout << std::endl;
    return 0;
}

int main() {
    test_deque();
    return 0; 
}