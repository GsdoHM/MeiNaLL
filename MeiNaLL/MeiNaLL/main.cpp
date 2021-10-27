#include <iostream>

#include <QtCore/QCoreApplication>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	std::cout << "hello, world!" << std::endl;

    return a.exec();
}
