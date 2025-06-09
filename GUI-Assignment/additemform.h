#ifndef ADDITEMFORM_H
#define ADDITEMFORM_H

#include <QDialog>
#include "StorageManager.h"
namespace Ui {
class AddItemForm;
}

class AddItemForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddItemForm(QWidget *parent = nullptr);
    explicit AddItemForm(QWidget *parent = nullptr, QString = "");
    ~AddItemForm();

signals:
    void dataAvailable();

 private slots:
     void on_buttonBox_accepted();

     void on_buttonBox_rejected();

 private:
    Ui::AddItemForm *ui;
};

#endif // ADDITEMFORM_H
