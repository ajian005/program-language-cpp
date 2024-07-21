/**
 * 使用 pthread_create() 函数创建了 5 个线程，并接收传入的参数。
 * 每个线程打印一个 "Hello Runoob!" 消息，并输出接收的参数，然后调用 pthread_exit() 终止线程。
 */
#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void* printHello(void* threadId) {
    // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
    int tid = *((int*)threadId);
    cout << "Hello Runoob! THREAD ID: " << tid << endl;
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int indexes[NUM_THREADS];  // 用数组来保存i的值
    int rc;
    int i;
    for (i=0; i < NUM_THREADS; i++) {
        cout << "CREATE thread " << i << endl;
        indexes[i] = i;  // 先保存i的值
        // 传入的时候必须强制转换为void*，即无类型指针
        void* arg = (void*)&(indexes[i]);
        rc = pthread_create(&threads[i], NULL, printHello, arg);
        if (rc) {
            cout << "Error: 无法创建线程，返回代码为 " << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}