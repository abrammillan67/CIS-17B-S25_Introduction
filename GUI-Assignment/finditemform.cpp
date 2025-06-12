#include "finditemform.h"
#include "ui_finditemform.h"

findItemForm::findItemForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::findItemForm)
{
    ui->setupUi(this);
}

findItemForm::~findItemForm()
{
    delete ui;
}
