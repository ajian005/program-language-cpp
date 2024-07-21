/**
 * C++ 容器类 <array>
 * C++11标准引入了 <array> 头文件，它提供了一种固定大小的数组容器，与C语言中的数组相比，具有更好的类型安全和内存管理特性。
   std::array 是C++标准库中的一个模板类，它定义在 <array> 头文件中。
   std::array 模板类提供了一个固定大小的数组，其大小在编译时确定，并且不允许动态改变。
 */
#include <array>
#include <iostream>

/**
 * 使用 std::array 的简单示例
 */
int testArray() {
    // 创建一个包含 5 个整数的 std::array
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};
    // 使用范围 for 循环遍历数组
    for (const auto & value : myArray) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // // 使用索引访问数组元素
    std::cout << "Element at index 2: " << myArray.at(2) << std::endl;

    // // 获取数组的大小
    std::cout << "Array size: " << myArray.size() << std::endl;

    // 修改数组元素
    myArray.at(3) = 20; // 修改索引为 3 的元素

    // // 再次遍历数组以显示修改后的元素
    for (const auto& value : myArray) {
        std::cout << value << " ";
    }

    return 0;
}

int main() { 
    testArray();
    return 0; 
}