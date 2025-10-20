#include "cbuiltndlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBuiltnDlg w;
    w.show();
    return a.exec();
}
