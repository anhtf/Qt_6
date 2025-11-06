#ifndef USER_H
#define USER_H

#include <QObject>
#include <QString>

class User : public QObject
{
    Q_OBJECT
public:
    explicit User(QString _username, QObject *parent = nullptr);

    QString username() const;
private:
    QString m_username;
signals:
    void messageSent(const QString& SenderUsername, const QString& message);
public:
    void sendMessage(const QString& message);
};

#endif // USER_H
