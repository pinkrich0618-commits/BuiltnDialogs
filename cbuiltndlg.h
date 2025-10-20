#ifndef CBUILTNDLG_H
#define CBUILTNDLG_H

#include <QDialog>
#include <QPushButton>
#include <QTextEdit>

class CBuiltnDlg : public QDialog
{
    Q_OBJECT

public:
    CBuiltnDlg(QWidget *parent = nullptr);
    ~CBuiltnDlg();
private:
    QTextEdit   *displayTextEdit;
    QPushButton *coiorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
private slots:
};
#endif // CBUILTNDLG_H
