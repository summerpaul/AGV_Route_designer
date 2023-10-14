/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-14 23:20:59
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-14 23:25:21
 */
#include <stdint.h>

#ifndef __QT_SINGLETON_H__
#define __QT_SINGLETON_H__

#include <QMutex>
#include <QScopedPointer>

#include "singleton.h"

#define QT_SINGLETONG(Class)                  \
 private:                                     \
  friend class Singleton<Class>;              \
  friend struct QScopedPointerDeleter<Class>; \
                                              \
 public:                                      \
  static Class* getInstance() { return Singleton<Class>::getInstance(); }

#endif /* __QT_SINGLETON_H__ */
