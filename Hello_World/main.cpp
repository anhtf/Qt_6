#include <QCoreApplication>

// Give method to input and output console
#include <QTextStream>
#include <QString>

#include <QDebug>
#include <QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTimer::singleShot(1000, &a, &QCoreApplication::quit);

    QTextStream input_stream(stdin);
    QTextStream output_stream(stdout);


    output_stream << "Enter your username: ";
    output_stream.flush();

    QString username = input_stream.readLine();
    output_stream << "Hello " << username <<"\n";
    output_stream.flush();

    qInfo() << "Enter your age: ";
    QString age = input_stream.readLine();
    qInfo() << username << age << "years old";

    return a.exec();
}
