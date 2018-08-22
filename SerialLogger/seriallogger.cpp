#include "seriallogger.h"
#include "ui_seriallogger.h"

SerialLogger::SerialLogger(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialLogger)
{
    ui->setupUi(this);
}

SerialLogger::~SerialLogger()
{
    delete ui;
}
