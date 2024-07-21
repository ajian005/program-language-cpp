/**
 * C++ 标准库中的 <queue> 头文件提供了队列（Queue）数据结构的实现。队列是一种先进先出（FIFO, First In First Out）的数据结构，它允许在一端添加元素（称为队尾），并在另一端移除元素（称为队首）。

队列是一种线性数据结构，它遵循以下规则：

元素只能从队尾添加。
元素只能从队首移除。
 */


#include <iostream>
#include <queue>

/**
 * 下面是一个使用 C++ 标准库 <queue> 的简单实例：
 */
int test_queue() {
    // // 创建一个整数队列
    std::queue<int> q;

    // 向队列中添加元素
    q.push(10);
    q.push(20);
    q.push(30);

    // 打印队列中的元素数量
    std::cout << "Queue size: " << q.size() << std::endl;

    // 打印队列中的第一个元素
    std::cout << "Front element: " << q.front() << std::endl;

    // 打印队列中的最后一个元素
    std::cout << "Back element: " << q.back() << std::endl;

    // 从队列中移除第一个元素
    q.pop();
    std::cout << "remove head element: " << q.front() << std::endl;

    // 再次打印队列中的元素数量
    std::cout << "Queue size after pop: " << q.size() << std::endl;

    return 0;
}

int main() { 
    test_queue();
    return 0; }