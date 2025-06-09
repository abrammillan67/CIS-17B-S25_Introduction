#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/qlistwidget.h>
#include "StorageManager.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_FindItemBtn_clicked();

    void on_RemoveItemBtn_clicked();

    void on_AddItemBtn_clicked();

    void onDataAvailable();


private:
    Ui::MainWindow *ui;
    StorageManager manager;
    QListWidget *itemList;
};
#endif // MAINWINDOW_H
