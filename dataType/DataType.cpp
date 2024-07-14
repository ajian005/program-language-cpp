#include<iostream>  
#include <limits>
 
using namespace std;  

float staticCast() {
    cout << "============staticCast===============" << endl;
    int i = 10;
    float f = static_cast<float>(i); // 静态将int类型转换为float类型
    cout << "i = " << i << ", f = " << f << endl;
    return f;
}

// 动态转换（Dynamic Cast）
/*
float dynamicCast() {
    cout << "============dynamicCast===============" << endl;
    int i = 10;
    float f = dynamic_cast<float>(i); // 动态将int类型转换为float类型
    cout << "i = " << i << ", f = " << f << endl;
    return f;
}
*/

// 常量转换（Const Cast）
 int constCast() {
     const int i = 10;
    int& r = const_cast<int&>(i); // 常量转换，将const int转换为int
    return r;
 }

 // 重新解释转换（Reinterpret Cast）
 float reinterpretCast() {
     int i = 10;
     float f = reinterpret_cast<float&>(i); // 重新解释转换，将int转换为float
     return f;
}
int main()  
{  
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "used bytes size:" << sizeof(bool);  
    cout << "\t maxValue:" << (numeric_limits<bool>::max)();  
    cout << "\t\t minValue:" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "used bytes size:" << sizeof(char);  
    cout << "\t maxValue:" << (numeric_limits<char>::max)();  
    cout << "\t\tminValue:" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "used bytes size:" << sizeof(signed char);  
    cout << "\t maxValue:" << (numeric_limits<signed char>::max)();  
    cout << "\t\tminValue:" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "used bytes size:" << sizeof(unsigned char);  
    cout << "\t maxValue:" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\tminValue:" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "used bytes size:" << sizeof(wchar_t);  
    cout << "\t maxValue:" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\tminValue:" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "used bytes size:" << sizeof(short);  
    cout << "\t maxValue:" << (numeric_limits<short>::max)();  
    cout << "\t\tminValue:" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "used bytes size:" << sizeof(int);  
    cout << "\t maxValue:" << (numeric_limits<int>::max)();  
    cout << "\tminValue:" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "used bytes size:" << sizeof(unsigned);  
    cout << "\t maxValue:" << (numeric_limits<unsigned>::max)();  
    cout << "\tminValue:" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "used bytes size:" << sizeof(long);  
    cout << "\t maxValue:" << (numeric_limits<long>::max)();  
    cout << "\tminValue:" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "used bytes size:" << sizeof(unsigned long);  
    cout << "\t maxValue:" << (numeric_limits<unsigned long>::max)();  
    cout << "\tminValue:" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "used bytes size:" << sizeof(double);  
    cout << "\t maxValue:" << (numeric_limits<double>::max)();  
    cout << "\tminValue:" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "used bytes size:" << sizeof(long double);  
    cout << "\t maxValue:" << (numeric_limits<long double>::max)();  
    cout << "\tminValue:" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "used bytes size:" << sizeof(float);  
    cout << "\t maxValue:" << (numeric_limits<float>::max)();  
    cout << "\tminValue:" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "used bytes size:" << sizeof(size_t);  
    cout << "\t maxValue:" << (numeric_limits<size_t>::max)();  
    cout << "\tminValue:" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "used bytes size:" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  

    // 静态转换（Static Cast）
    float returnValue = staticCast();


    return 0;  
}

