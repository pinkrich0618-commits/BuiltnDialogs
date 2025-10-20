#include "cbuiltndlg.h"
#include <QGridLayout>
CBuiltnDlg::CBuiltnDlg(QWidget *parent)
    : QDialog(parent)
{
    QGridLayout *gridLayout = new QGridLayout;
    displayTextEdit = new QTextEdit(QStringLiteral(""));
    colorPushBtn    = new QPushButton(QStringLiteral(""));
    errorPushBtn    = new QPushButton(QStringLiteral(""));
    filePushBtn     = new QPushButton(QStringLiteral(""));
    fontPushBtn     = new QPushButton(QStringLiteral(""));
    inputPushBtn    = new QPushButton(QStringLiteral(""));
    pagePushBtn     = new QPushButton(QStringLiteral(""));
    progressPushBtn = new QPushButton(QStringLiteral(""));
}

CBuiltnDlg::~CBuiltnDlg() {}
