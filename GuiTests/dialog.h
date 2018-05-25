#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void bS1Clicked();
    void bS2Clicked();
    void bS3Clicked();
    void bS4Clicked();
    void bS5Clicked();
    void bS6Clicked();
    void bS7Clicked();
    void bS8Clicked();
    void bS9Clicked();
    void bS10Clicked();
    void bS11Clicked();
    void bS12Clicked();

private:

};

#endif // DIALOG_H
