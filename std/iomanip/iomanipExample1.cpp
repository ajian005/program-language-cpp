/**
 * C++ 标准库 <iomanip>
 * <iomanip> 是 C++ 标准库中的一个头文件，它提供了对输入/输出流的格式化操作。
 * iomanip 库中的函数允许开发者控制输出格式，如设置小数点后的位数、设置宽度、对齐方式等。
 * iomanip 是 Input/Output Manipulators 的缩写，它提供了一组操作符，用于控制 C++ 标准库中的输入/输出流的格式。
 */


#include <iomanip>
#include <iostream>

/**
 * 1. 设置宽度
 * 使用 setw 可以设置输出的宽度。如果输出内容的字符数少于设置的宽度，剩余部分将用空格填充。
 */
int setWidth() { 
    std::cout << std::setw(10) << "Hello" << std::endl; // 输出 "     Hello"
    return 0; 
}
/**
 * 2. 设置精度
 * 使用 setprecision 可以设置浮点数的小数点后的位数。
 */
int setPrecision() {
    double pi = 3.14159265358979323846;
    std::cout << std::setprecision(4) << pi << std::endl; // 输出 "3.142"
    return 0; 
}

/**
 * 3. 固定小数点和科学计数法
 * fixed 和 scientific 可以控制浮点数的输出格式
 */
int fixedAndScientific() {
    double num = 123456789.123456789;
    std::cout << "Fixed: " << std::fixed << num  << std::endl; // 输出 "123456789.123457"
    std::cout << "Scientific: " << std::scientific << num << std::endl; // 输出 "1.234568e+08"
    return 0; 
}

/**
 * 4. 设置填充字符
 * 使用 setfill 可以设置填充字符，通常与 setw 一起使用。
 */
int setFill() {
     std::cout << std::setfill('*') << std::setw(10) << "Hello" << std::endl; 
     return 0; 
}

/**
 * 5. 设置和重置格式标志
 * setiosflags 和 resetiosflags 可以设置或重置流的格式标志
 */
int setAndResetFormatFlags() {
    std::cout << std::setiosflags(std::ios::uppercase) << std::hex << 255 << std::endl; 
    std::cout << std::resetiosflags(std::ios::uppercase) << std::hex << 255 << std::endl;
    std::cout << std::resetiosflags(std::ios::uppercase) << std::dec << 255 << std::endl;
    return 0;
}

int main() {
    setAndResetFormatFlags();
    // setFill();
    // fixedAndScientific();
    // setPrecision();
    // setWidth();
    return 0;
}