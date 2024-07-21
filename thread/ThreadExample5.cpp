/**
 *  演示多线程的CPP程序
 *  使用三个不同的可调用对象
 */

#include <iostream>
#include <thread>
using namespace std;

// 一个虚拟函数
void foo(int z) {
    for (int i = 0; i < z; ++i) {
        cout << "Thread using function pointer as callable\n";
    }
}

// 可调用对象
class thread_obj {
    public:
    void operator()(int z)  {
        for (int i = 0; i < z; ++i) {
            cout << "Thread using callable object\n";
        }
    }
}; // thread_obj

int main() {
    cout << "thread 1,2,3 run << endl";
    // 使用函数指针作为可调用对象
    thread thread1(foo, 5);

    // 使用可调用对象作为线程函数
    thread thread2(thread_obj(), 5);

    // 定义 Lambda 表达式
    auto f = [](int x) {
        for (int i = 0; i < x; ++i) {
            cout << "Thread using lambda expression as callable\n";
        }
    };

    // 线程通过使用 lambda 表达式作为可调用的参数
    thread thread3(f, 5);

    // 等待线程完成
    // 等待线程 t1完成
    thread1.join();

    // 等待线程 t2完成
    thread2.join();

    // 等待线程 t3完成
    thread3.join();
    
    return 0;
}