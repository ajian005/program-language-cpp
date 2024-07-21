/**
 * <stack> 是 C++ 标准模板库（STL）的一部分，它实现了一个后进先出（LIFO，Last In First Out）的数据结构。这种数据结构非常适合于需要"最后添加的元素最先被移除"的场景。
 * <stack> 容器适配器提供了一个栈的接口，它基于其他容器（如 deque 或 vector）来实现。栈的元素是线性排列的，但只允许在一端（栈顶）进行添加和移除操作。
 */

#include <stack>
#include <iostream>

/**
 * 下面是一个使用 <stack> 的完整示例，包括输出结果：
 */
int test_stack() {
    std::stack<int> s;

    // 向栈中添加元素
    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.push(40); 
    s.push(50);

    // 打印栈顶元素
    std::cout << "Top element is :" << s.top() << std::endl;

    // 移除栈顶元素
    s.pop();
    std::cout << "After popping, top element is :" << s.top() << std::endl;

    // 检查栈是否为空
    if (!s.empty()) {
        std::cout << "Stack is not empty" << std::endl;
    }

    // 打印栈的大小
    std::cout << "Size of stack is :" << s.size() << std::endl;

    // 继续移除元素
    s.pop();
    s.pop();

    // 检查栈是否为空
    if (s.empty()) {
        std::cout << "Stack is empty" << std::endl;
    }
    return 0;
}

int main() { 
    test_stack();
    return 0; }