#include "removeitemform.h"
#include "ui_removeitemform.h"

removeItemForm::removeItemForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::removeItemForm)
{
    ui->setupUi(this);
}

removeItemForm::~removeItemForm()
{
    delete ui;
}
