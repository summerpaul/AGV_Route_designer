/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-14 18:49:01
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-14 18:52:36
 */

#ifndef __UI_H__
#define __UI_H__
#include <QObject>
#include <QQmlEngine>
class UI : public QObject {
  Q_OBJECT
 public:
  static UI *getInstance();
  Q_DECL_EXPORT void registerTypes(QQmlEngine *engine);
  void registerTypes(const char *uri);
  void initializeEngine(QQmlEngine *engine, const char *uri);

 private:
  static UI *instance_;
};

#endif /* __UI_H__ */
