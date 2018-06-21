#include"touch_test.h"
#include"ui_touch_test.h"
#include <QDebug>
#include <iostream>
#include <QMetaEnum>

Touch_test::Touch_test(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Touch_test)
{
    ui->setupUi(this);
    ui->lineEdit->installEventFilter(this);
}

Touch_test::~Touch_test()
{
    delete ui;
}



bool Touch_test::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() != QEvent::DynamicPropertyChange && event->type() != QEvent::Paint) {
        static int eventEnumIndex = QEvent::staticMetaObject.indexOfEnumerator("Type");
        QString name = QEvent::staticMetaObject.enumerator(eventEnumIndex).valueToKey(event->type());
        qDebug() << obj->objectName() << event->type();
        ui->plainTextEdit->moveCursor (QTextCursor::End);
        ui->plainTextEdit->insertPlainText (name +"\n");
        ui->plainTextEdit->moveCursor (QTextCursor::End);
    }
    return false;
}
