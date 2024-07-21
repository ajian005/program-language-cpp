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

/**
 * 流的状态检查
 */
int stream_state_check() {
    int num;
    std::cout << "Enter a number: ";
    std::cin  >> num;
    // 检查输入操作是否成功
    if (std::cin.fail()) {
        std::cerr << "Invalid input!" << std::endl;
    } else {
        std::cout << "You entered: " << num << std::endl;
    }
    return 0;
}

/**
 * 处理字符串输入
 */
int string_input() {
    std::string fulName;
    std::cout << "Enter your full name:";
    std::getline(std::cin, fulName);
    std::cout << "Hello, " << fulName << "!" << std::endl;
    return 0;
}

int main() {
    string_input();
    
    stream_state_check();

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
