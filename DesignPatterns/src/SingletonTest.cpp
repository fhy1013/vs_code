#include "SingletonTest.h"

#include <iostream>
#include <thread>

#include "Singleton.h"

void SingletonFunc(int thread_num) {
    Singleton *s = Singleton::GetInstance();
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "Ïß³ÌºÅ: " << thread_num << std::endl;
    // std::cout << "thread num: " << thread_num << std::endl;
    return;
}

void SingletonTest() {
    const int THREAD_NUM = 3;
    std::thread t[THREAD_NUM];
    int thread_num = 0;
    while (thread_num < THREAD_NUM) {
        t[thread_num] = std::thread(SingletonFunc, thread_num);
        ++thread_num;
    }

    for (auto &e : t) {
        e.join();
    }

    std::cout << "SingletonTest end" << std::endl;
    system("pause");
}
