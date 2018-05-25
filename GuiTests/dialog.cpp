#include "dialog.h"
#include <QGridLayout>
#include <QPushButton>
#include <QDebug>
#include <QTabWidget>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{

    QTabWidget *mainWindow = new QTabWidget();
    QWidget *ventile = new QWidget();
    mainWindow->addTab(ventile,"Ventile");
    QWidget *pumps = new QWidget();
    mainWindow->addTab(pumps,"Pumps");

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(mainWindow);


    QGridLayout *buttonsLayout = new QGridLayout;

    QPushButton *bS1 = new QPushButton(tr("S1"));
    connect(bS1,SIGNAL(clicked()),this,SLOT(bS1Clicked()));
    QPushButton *bS2 = new QPushButton(tr("S2"));
    connect(bS2,SIGNAL(clicked()),this,SLOT(bS2Clicked()));
    QPushButton *bS3 = new QPushButton(tr("S3"));
    connect(bS3,SIGNAL(clicked()),this,SLOT(bS3Clicked()));
    QPushButton *bS4 = new QPushButton(tr("S4"));
    connect(bS4,SIGNAL(clicked()),this,SLOT(bS4Clicked()));
    QPushButton *bS5 = new QPushButton(tr("S5"));
    connect(bS5,SIGNAL(clicked()),this,SLOT(bS5Clicked()));
    QPushButton *bS6 = new QPushButton(tr("S6"));
    connect(bS6,SIGNAL(clicked()),this,SLOT(bS6Clicked()));
    QPushButton *bS7 = new QPushButton(tr("S7"));
    connect(bS7,SIGNAL(clicked()),this,SLOT(bS7Clicked()));
    QPushButton *bS8 = new QPushButton(tr("S8"));
    connect(bS8,SIGNAL(clicked()),this,SLOT(bS8Clicked()));
    QPushButton *bS9 = new QPushButton(tr("S9"));
    connect(bS9,SIGNAL(clicked()),this,SLOT(bS9Clicked()));
    QPushButton *bS10 = new QPushButton(tr("S10"));
    connect(bS10,SIGNAL(clicked()),this,SLOT(bS10Clicked()));
    QPushButton *bS11 = new QPushButton(tr("S11"));
    connect(bS11,SIGNAL(clicked()),this,SLOT(bS11Clicked()));
    QPushButton *bS12 = new QPushButton(tr("S12"));
    connect(bS12,SIGNAL(clicked()),this,SLOT(bS12Clicked()));

    buttonsLayout->addWidget(bS1, 0 , 0);
    buttonsLayout->addWidget(bS2, 0 , 1);
    buttonsLayout->addWidget(bS3, 0 , 2);
    buttonsLayout->addWidget(bS4, 0 , 3);
    buttonsLayout->addWidget(bS5, 1 , 0);
    buttonsLayout->addWidget(bS6, 1 , 1);
    buttonsLayout->addWidget(bS7, 1 , 2);
    buttonsLayout->addWidget(bS8, 1 , 3);
    buttonsLayout->addWidget(bS9, 2 , 0);
    buttonsLayout->addWidget(bS10, 2 , 1);
    buttonsLayout->addWidget(bS11, 2 , 2);
    buttonsLayout->addWidget(bS12, 2 , 3);

    mainWindow->setCurrentWidget(pumps);
    mainWindow->currentWidget()->setLayout(buttonsLayout);
    setLayout(mainLayout);

    resize(640,480);
    setCursor(Qt::BusyCursor);
}

Dialog::~Dialog()
{

}



void Dialog::bS1Clicked(){
    qDebug()<<"S1 pressed.";
}
void Dialog::bS2Clicked(){
    qDebug()<<"S2 pressed.";
}
void Dialog::bS3Clicked(){
    qDebug()<<"S3 pressed.";
}
void Dialog::bS4Clicked(){
    qDebug()<<"S4 pressed.";
}
void Dialog::bS5Clicked(){
    qDebug()<<"S5 pressed.";
}
void Dialog::bS6Clicked(){
    qDebug()<<"S6 pressed.";
}
void Dialog::bS7Clicked(){
    qDebug()<<"S7 pressed.";
}
void Dialog::bS8Clicked(){
    qDebug()<<"S8 pressed.";
}
void Dialog::bS9Clicked(){
    qDebug()<<"S9 pressed.";
}
void Dialog::bS10Clicked(){
    qDebug()<<"S10 pressed.";
}
void Dialog::bS11Clicked(){
    qDebug()<<"S11 pressed.";
}
void Dialog::bS12Clicked(){
    qDebug()<<"S12 pressed.";
}
