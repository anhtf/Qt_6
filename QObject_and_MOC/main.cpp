#include <QCoreApplication>
#include "task.h"
#include "task_manager.h"

// void on_task_completed(const QString& des)
// {
//     qInfo() << "[Slot] task completed " << des << "\n";
// }
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Task* task_1 = new Task("Buy car", &a);
    // Task* task_2 = new Task("Buy house", &a);

    // QObject::connect(task_1, &Task::task_completed, on_task_completed);
    // QObject::connect(task_2, &Task::task_completed, on_task_completed);

    // task_1->complete();
    // task_2->complete();

    task_manager* task_man = new task_manager(&a);
    Task* task_1 = new Task("Buy car", &a);
    Task* task_2 = new Task("Buy house", &a);
    Task* task_3= new Task("Wedding", &a);

    task_man->add_task(task_1);
    task_man->add_task(task_2);
    task_man->add_task(task_3);

    task_man->complete_all_task();

    return a.exec();
}
