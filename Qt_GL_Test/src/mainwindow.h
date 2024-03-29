#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void slot_addItemToListWidget();

private slots:
    void on_actionQuit_triggered();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
