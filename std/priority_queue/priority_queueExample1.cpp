/**
 * 在 C++ 中，<priority_queue> 是标准模板库（STL）的一部分，用于实现优先队列。

优先队列是一种特殊的队列，它允许我们快速访问队列中具有最高（或最低）优先级的元素。

在 C++ 中，priority_queue 默认是一个最大堆，这意味着队列的顶部元素总是具有最大的值。

priority_queue 是一个容器适配器，它提供了对底层容器的堆操作。它不提供迭代器，也不支持随机访问。
 */

#include <iostream>   // std::cout
#include <queue>

using namespace std;

/**
 * 下面是一个使用 priority_queue 的简单实例，我们将创建一个最大堆，并展示如何添加元素和获取队列顶部的元素。
 */
int test_default_maxHeap() {
    // 创建一个整型优先队列
    std::priority_queue<int> pq;

    // 向优先队列中添加元素
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // 输出队列中的元素
    std::cout << "队列中的元素：" << std::endl;
    while (!pq.empty()) {
        std::cout << pq.top() << std::endl;
        pq.pop();
    }
    return 0;
}

struct compare {
    bool operator()(int a, int b) {
        return a > b; // 最小堆
    }
};

/**
 * 如果你需要一个最小堆，可以通过自定义比较函数来实现：
 */
int test_user_define_minHeap() {
    // 创建一个自定义类型的优先队列，使用最小堆
    std::priority_queue<int, vector<int>, compare> pq_min;

    // 向优先队列中添加元素
    pq_min.push(30);
    pq_min.push(10);
    pq_min.push(50);
    pq_min.push(20);

    // 输出队列中的元素
    std::cout << "min heap elements:" << std::endl;
    while(!pq_min.empty()) {
        std::cout << pq_min.top() << std::endl;
        pq_min.pop();
    }
    return 0;
}

int main() {
    test_user_define_minHeap();
    // test_default_maxHeap();
    return 0;
}