#include <qt/QtCore/QCoreApplication>
#include <iostream>
#include <cmath>

#define PI 3.14159265f

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double tmp = 10.0;

    std::cout << cos(tmp * PI) << std::endl;

    std::cout << "test" << std::endl;
    return a.exec();
}
