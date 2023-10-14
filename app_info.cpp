/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-14 23:24:07
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-14 23:39:33
 */
#include "app_info.h"

#include <QDebug>
#include <QGuiApplication>
#include <QQmlContext>

#include "version.h"

AppInfo::AppInfo(QObject *parent) : QObject{parent} {
  version(APPLICATION_VERSION);
}

void AppInfo::init(QQmlApplicationEngine *engine) { engine->rootContext(); }
