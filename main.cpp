/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-13 22:40:57
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-14 01:13:39
 */
#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    QGuiApplication::setOrganizationName("Sunny Optical");
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}