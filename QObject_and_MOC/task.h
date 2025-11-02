#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QString>
#include <QDebug>

class Task : public QObject
{
    Q_OBJECT
public:
    explicit Task(QString description, QObject *parent = nullptr);

    void    complete();
    QString Description();
    bool    Completed();
private:
    QString m_description;
    bool    m_completed;
signals:
    void task_completed(const QString& des);
};

#endif // TASK_H
