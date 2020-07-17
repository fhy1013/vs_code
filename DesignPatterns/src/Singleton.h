#ifndef _SINGLETON_H_
#define _SINGLETON_H_
// 单例模式
#include <iostream>
#include <mutex>

class Singleton {
   public:
    // static Singleton* GetInstance();
    static Singleton* GetInstance() {
        if (instance_ == nullptr) {
            mtx_.lock();
            if (instance_ == nullptr) {
                instance_ = new Singleton();
                std::cout << "new Singleton" << std::endl;
            }
            mtx_.unlock();
        }
        return instance_;
    }

   private:
    Singleton() {}
    Singleton(const Singleton& rsh) = delete;
    Singleton& operator=(const Singleton& rsh) = delete;

    static Singleton* instance_;
    static std::mutex mtx_;
};

Singleton* Singleton::instance_ = nullptr;
std::mutex Singleton::mtx_;

#endif  // _SINGLETON_H_