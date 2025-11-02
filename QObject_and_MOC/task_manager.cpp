#include "task_manager.h"

task_manager::task_manager(QObject *parent)
    : QObject{parent}
{}

void task_manager::add_task(Task *task)
{
    task->setParent(this);
    connect(task, &Task::task_completed, this, &task_manager::on_task_completed);

    m_list_task.append(task);
}

void task_manager::complete_all_task()
{
    for (Task* task : m_list_task)
    {
        task->complete();
    }
}

void task_manager::on_task_completed(const QString &des)
{
     qInfo() << "[Task Manager] task completed " << des << "\n";
}
