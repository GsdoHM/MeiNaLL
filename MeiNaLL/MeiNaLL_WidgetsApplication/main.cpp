#include "MeiNaLL_WidgetsApplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MeiNaLL_WidgetsApplication w;
    w.show();
    return a.exec();
}
