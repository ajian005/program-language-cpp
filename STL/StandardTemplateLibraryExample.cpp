/**
 * C++ 标准模板库（Standard Template Library，STL）是一套功能强大的 C++ 模板类和函数的集合，它提供了一系列通用的、可复用的算法和数据结构。
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 创建一个向量存储 int
    vector<int>  vec;
    int i;

    // 显示 vec 的原始大小
    cout << "vector size = " << vec.size() << endl;

    // 推入 5个值到向量中
    for (i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // 显示 vec 扩展后的大小
    cout << "extended vector size = " << vec.size() << endl;

    // 访问向量中的 5 个值
    for (i = 0; i < 5; i++) {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // 使用迭代器 iterator 访问值
    vector<int>::iterator v = vec.begin();
    while (v != vec.end()) {
        cout << "value of vec using iterator = " << *v << endl;
        v++;
    }
    return 0;
}