#include "task.h"

Task::Task(QString description, QObject *parent)
    : QObject{parent}, m_description(description), m_completed(false)
{}

void Task::complete()
{
    if (!m_completed)
    {
        m_completed = true;
        qInfo() << "Task Completed" << m_description <<"\n";
        emit task_completed(m_description);
    }
}

QString Task::Description()
{
    return m_description;
}

bool Task::Completed()
{
    return m_completed;
}
