#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "additemform.h"
#include "finditemform.h"
#include "removeitemform.h"
#include "StorageManager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     shared_ptr<StoredItem> item = make_shared<StoredItem>("test","test" , "test" );
    manager.addItem(item);

    for(const auto& pair : manager.itemByDescription ){ //this for loop adds all items in itemByDescription to the List on the mainWindow of app
        QString itemText = QString::fromStdString(pair.first) + " : " + QString::fromStdString(pair.second->getDescription());
        ui->listWidget->addItem(itemText);

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_FindItemBtn_clicked()
{
    findItemForm* findForm = new findItemForm(this);
    findForm->show();
}


void MainWindow::on_RemoveItemBtn_clicked()
{
    removeItemForm* removeForm = new removeItemForm(this);
    removeForm->show();
}


void MainWindow::on_AddItemBtn_clicked()
{
    AddItemForm* addForm = new AddItemForm(this,"Enter item info below");
    addForm->show();

    connect(addForm, &AddItemForm::dataAvailable, this, &MainWindow::onDataAvailable);

}

void MainWindow::onDataAvailable()
{

}

