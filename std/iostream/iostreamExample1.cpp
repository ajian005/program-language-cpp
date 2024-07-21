/**
 * C++ 标准输入输出 -- <iostream>
 */
#include <iostream>
#include <iomanip>



/**
 * 格式化输出:使用<iomanip>库可以对输出进行格式化，例如设置宽度、精度和对齐方式。
 */
int iomanip_methdo() {
    double pi = 3.14159;

    // 设置输出精度
    std::cout << std::setprecision(3) << pi << std::endl;

    // 设置输出宽度和对齐方式
    std::cout << std::setw(10) << std::left << pi << std::endl;
    std::cout << std::setw(10) << std::right << pi << std::endl;

    return 0;
}

int main() {
    int age;
    std::string  name;

    iomanip_methdo();

    // 标准日志输出
    std::clog << "This is a log message." << std::endl;

    // 标准错误输出:
    std::cerr << "An error occurred!" << std::endl;

    // 使用std::count输出到屏幕
    std::cout << "Enter your name: ";
    // 使用std::cin 从键盘读取输入
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // 输出读取到的数据
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}
