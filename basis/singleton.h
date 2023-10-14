/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-14 18:46:36
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-14 18:46:51
 */
#ifndef SINGLETON_H
#define SINGLETON_H

#include <memory>
#include <mutex>

template <typename T>
class Singleton {
 public:
  static T* getInstance();

  Singleton(const Singleton& other) = delete;
  Singleton<T>& operator=(const Singleton& other) = delete;

 private:
  static std::mutex mutex;
  static T* instance;
};

template <typename T>
std::mutex Singleton<T>::mutex;
template <typename T>
T* Singleton<T>::instance;
template <typename T>
T* Singleton<T>::getInstance() {
  if (instance == nullptr) {
    std::lock_guard<std::mutex> locker(mutex);
    if (instance == nullptr) {
      instance = new T();
    }
  }
  return instance;
}

#endif  // SINGLETON_H
