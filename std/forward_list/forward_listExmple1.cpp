/**
 * C++ 容器 <forward_list>
 * C++ 标准库中的 <forward_list> 是一种容器，它提供了一种单向链表的数据结构。
 * 与双向链表（std::list）不同，std::forward_list 只支持单向遍历。它适用于需要频繁进行前向遍历和插入、删除操作的场景。
 */
#include <forward_list>
#include <iostream>

/**
 * 下面是一个使用 std::forward_list 的简单示例，包括创建列表、添加元素、遍历列表和输出结果。
 */
int test_forward_list() { 
    // 创建一个空的 forward_list
    std::forward_list<int> fl;
    
    // 在列表前端添加元素
    fl.push_front(10); 
    fl.push_front(20); 
    fl.push_front(30);

    // 遍历 forward_list 并输出元素
    for (auto it = fl.begin(); it != fl.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0; 
}

int main() { 
    test_forward_list();
    return 0; 
}