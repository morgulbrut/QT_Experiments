#ifndef SERIALLOGGER_H
#define SERIALLOGGER_H

#include <QMainWindow>

namespace Ui {
class SerialLogger;
}

class SerialLogger : public QMainWindow
{
    Q_OBJECT

public:
    explicit SerialLogger(QWidget *parent = nullptr);
    ~SerialLogger();

private:
    Ui::SerialLogger *ui;
};

#endif // SERIALLOGGER_H
