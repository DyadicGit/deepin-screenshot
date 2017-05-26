/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusScreenshot -p dbusscreenshot com.deepin.DeepinScreenshot.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSSCREENSHOT_H
#define DBUSSCREENSHOT_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.DeepinScreenshot
 */
class DBusScreenshot: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.DeepinScreenshot"; }

public:
    DBusScreenshot(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DBusScreenshot();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> DelayScreenshot(qlonglong in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("DelayScreenshot"), argumentList);
    }

    inline QDBusPendingReply<> FullscreenShot()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("FullscreenShot"), argumentList);
    }

    inline QDBusPendingReply<> SavePath(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("SavePath"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace deepin {
    typedef ::DBusScreenshot DeepinScreenshot;
  }
}
#endif