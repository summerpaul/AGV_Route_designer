/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-13 22:40:57
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-15 00:03:05
 */
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "app_info.h"
#include "qt_colors.h"

int main(int argc, char *argv[]) {
  QGuiApplication::setOrganizationName("Paul Summer");
  QGuiApplication::setApplicationName("AGV_Route_Designer");

  QGuiApplication app(argc, argv);
  QQmlApplicationEngine engine;
  // 获取程序版本信息
  AppInfo::getInstance()->init(&engine);


  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(
      &engine, &QQmlApplicationEngine::objectCreated, &app,
      [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl) QCoreApplication::exit(-1);
      },
      Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
