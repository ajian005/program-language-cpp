/**
 * C++ 标准库 <sstream>
 * sstream 是 C++ 标准库中的一个组件，它提供了一种方便的方式来处理字符串流（可以像处理流一样处理字符串）。
    <sstream> 允许你将字符串当作输入/输出流来使用，这使得从字符串中读取数据或将数据写入字符串变得非常简单。
 */

#include <sstream>
#include <iostream>

/**
 * 从字符串读取数据
 * 使用 istringstream 从字符串中读取整数和浮点数的例子
 */
int example1() {
    std::string data = "10 20.5";
    std::istringstream iss(data);

    int i;
    double d;
    iss >> i >> d;

    std::cout << "Integer: " << i << std::endl;
    std::cout << "Double: " << d << std::endl;
    return 0;
}

/**
 * 向字符串写入数据
 * 使用 ostringstream 将数据写入字符串的例子
 */
int writeToStringData() {
    std::ostringstream oss;
    int i = 100;
    double d = 200.5;
    oss << i << " " << d;
    std::string result = oss.str();
    std::cout << "Result: " << result << std::endl;
    return 0;
}

/**
 * 使用stringstream进行读写操作
 * 使用 stringstream 同时进行读取和写入操作的例子
 */
int userstringstream() {
    std::string data = "30 40.5";
    std::stringstream ss(data);

    int i;
    double d;

    // 从stringstream读取数据
    ss >> i >> d;
    std::cout << "Read Integer: " << i << ", Double:" << d << std::endl;


    // 向stringstream写入数据
    ss.str("");  // 清空streamstring的内容
    ss << "New data: " << 50 << " " << 60.7;

    
    std::string newData = ss.str(); // 这个地方返回空字符串信息
    std::cout << "New Data: " << newData << std::endl;
    return 0;
}

int main() { 
    userstringstream();
    // writeToStringData();
    // example1();
    return 0; 
}