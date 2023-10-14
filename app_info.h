/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-14 23:23:58
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-14 23:26:12
 */
#include <stdint.h>

#ifndef __APP_INFO_H__
#define __APP_INFO_H__

#include <QObject>
#include <QQmlApplicationEngine>

#include "qt_singleton.h"
#include "stdafx.h"


class AppInfo : public QObject {
  Q_OBJECT
  Q_PROPERTY_AUTO(QString, version)
 private:
  explicit AppInfo(QObject *parent = nullptr);

 public:
  QT_SINGLETONG(AppInfo)
  void init(QQmlApplicationEngine *engine);
};

#endif /* __APP_INFO_H__ */
