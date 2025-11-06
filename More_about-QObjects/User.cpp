#include "User.h"

User::User(QString _username, QObject *parent)
    : m_username(_username), QObject{parent}
{
    setObjectName(_username);
}

QString User::username() const
{
    return m_username;
}

void User::sendMessage(const QString &message)
{
    emit messageSent(m_username, message);
}
