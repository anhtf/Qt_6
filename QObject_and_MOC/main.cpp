#include <QCoreApplication>
#include "task.h"


void on_task_completed(const QString& des)
{
    qInfo() << "[Slot] task completed " << des << "\n";
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Task* task_1 = new Task("Buy car", &a);
    Task* task_2 = new Task("Buy house", &a);

    QObject::connect(task_1, &Task::task_completed, on_task_completed);
    QObject::connect(task_2, &Task::task_completed, on_task_completed);

    task_1->complete();
    task_2->complete();

    return a.exec();
}
