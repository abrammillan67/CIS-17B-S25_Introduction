#include "additemform.h"
#include "ui_additemform.h"
#include "StoredItem.h"
#include "StorageManager.h"

AddItemForm::AddItemForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddItemForm)
{
    ui->setupUi(this);
}

AddItemForm::AddItemForm(QWidget *parent, QString message)
    : QDialog(parent)
    , ui(new Ui::AddItemForm)
{
    ui->setupUi(this);
    ui->label->setText(message);
}

AddItemForm::~AddItemForm()
{
    delete ui;
}

void AddItemForm::on_buttonBox_accepted()
{

    shared_ptr<StoredItem> item = make_shared<StoredItem>(ui->idTextBox->text().toStdString(), ui->descTextBox->text().toStdString(), ui->locTextBox->text().toStdString() );
   //connect(this, &AddItemForm::finished, this) {
      //emit datavailable(item);
    //}
}


void AddItemForm::on_buttonBox_rejected()
{
    close();
}

