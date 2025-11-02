#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <QObject>
#include <QList>
#include "task.h"

class task_manager : public QObject
{
    Q_OBJECT
public:
    explicit task_manager(QObject *parent = nullptr);
    void add_task(Task* task);
    void complete_all_task();
public slots:
    void on_task_completed(const QString& des);
private:
    QList<Task*> m_list_task;
signals:
};

#endif // TASK_MANAGER_H
