/**
 * C++ 文件输入输出库 - <fstream>
 * 在C++中 <fstream> 是标准库中用于文件输入输出操作的类。它提供了一种方便的方式来读写文件。
 * fstream是iostream库的一部分，支持文本和二进制文件的读写。
 * fstream类是iostream库中的一个类，它继承自istream和ostream类，这意味着它既可以用于输入也可以用于输出。
 */

#include <fstream>
#include <iostream>

/**
 * fstream 的基本语法
 */
int fstreamExample1() {
    // 创建fstream对象
    std::fstream file;
    // 打开文件，如果文件不存在则创建，如果文件存在则追加内容
    file.open("example.txt", std::ios::out | std::ios::app);
    // 进行文件操作
    file.close(); // 关闭文件
    return 0;
}

/**
 * 写入文本文件:
 */
int fstreamExample2() {
    std::fstream file;
    file.open("example.txt", std::ios::out); // 以输出模式打开文件

    if (!file) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1; // 文件打开失败
    }
    file << "Hello, World!"  << std::endl; // 写入文本
    file.close(); // 关闭文件
    return 0;
}

/**
 * 读取文本文件
 */
int readTextFile() {
    std::fstream file;
    file.open("example.txt", std::ios::in); // 以输入模式打开文件
    if (!file) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1; // 文件打开失败
    }
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl; // 读取并输出每一行
    }
    file.close(); // 关闭文件
    return 0;
}

/**
 * 追加到文件
 */
int appendToFile() {
    std::fstream file;
    file.open("example.txt", std::ios::app); // 以追加模式打开文件
    if (!file) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1; // 文件打开失败
    }
    file << "Appending this line to the file." << std::endl; // 追加内容
    file.close(); // 关闭文件

    return 0;
}


int main() {
    appendToFile();
    // readTextFile();
    // fstreamExample2();
    // fstreamExample1();
    return 0; 
}