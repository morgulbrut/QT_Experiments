#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void drawGraph();
        void realtimeDataSlot();

        void on_pbSavePDF_clicked();

    private:
        Ui::MainWindow *ui;
        QTimer dataTimer;
};

#endif // MAINWINDOW_H
