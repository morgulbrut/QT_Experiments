#ifndef TOUCH_TEST_H
#define TOUCH_TEST_H

#include <QDialog>

namespace Ui
{
    class Touch_test;
}

class Touch_test : public QDialog
{
        Q_OBJECT

    public:
        explicit Touch_test(QWidget *parent = 0);
        ~Touch_test();

    private:
        Ui::Touch_test *ui;
        bool eventFilter(QObject *obj, QEvent *event);
};

#endif // TOUCH_TEST_H
