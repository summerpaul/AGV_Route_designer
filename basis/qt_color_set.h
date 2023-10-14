/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-14 23:54:19
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-14 23:55:16
 */

#ifndef __QT_COLOR_SET_H__
#define __QT_COLOR_SET_H__

#include <QObject>

#include "stdafx.h"

class QTColorSet : public QObject {
  Q_OBJECT
  Q_PROPERTY_AUTO(QString, darkest)
  Q_PROPERTY_AUTO(QString, darker)
  Q_PROPERTY_AUTO(QString, dark)
  Q_PROPERTY_AUTO(QString, normal)
  Q_PROPERTY_AUTO(QString, light)
  Q_PROPERTY_AUTO(QString, lighter)
  Q_PROPERTY_AUTO(QString, lightest)
 public:
  explicit QTColorSet(QObject *parent = nullptr) : QObject{parent} {}
};

#endif /* __QT_COLOR_SET_H__ */
