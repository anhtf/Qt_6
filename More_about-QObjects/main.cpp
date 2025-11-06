#include <QCoreApplication>
#include <QDebug>
#include "User.h"
#include "ChatRoom.h"

void printUser(User *user)
{
     qInfo() << "User info: \n\tObject name:" << user->objectName() << "\n\tUsername" << user->username() << "\nParent" << user->parent()->objectName();

    const QObjectList& c = user->children();
    for (int i = 0 ; i < c.length(); i++)
    {
        qInfo() << "\nChildren #" << (i+1) << ":" << c[i]->objectName();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // User user_1  = User("Doan_Thi_Huong", &a);
    // User* user_2 = new User("Tran_Duc_Dung", &user_1);
    // User* user_3 = new User("Tran_Duc_Hoang_Anh", &user_1);

    // printUser(&user_1);
    // printUser(user_2);
    // printUser(user_3);

    ChatRoom chatroom;
    chatroom.addUser("TranDucHoangAnh");
    chatroom.addUser("DoanThiHuong");

    auto* alice = chatroom.findChild<User*>("DoanThiHuong");
    auto* bob   = chatroom.findChild<User*>("TranDucHoangAnh");

    if(alice) alice->sendMessage("Hello");
    if (bob) bob->sendMessage("Hii");

    chatroom.removeUser("DoanThiHuong");
    chatroom.removeUser("abc");


    return a.exec();
}
