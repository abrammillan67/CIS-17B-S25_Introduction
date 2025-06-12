#ifndef REMOVEITEMFORM_H
#define REMOVEITEMFORM_H

#include <QDialog>

namespace Ui {
class removeItemForm;
}

class removeItemForm : public QDialog
{
    Q_OBJECT

public:
    explicit removeItemForm(QWidget *parent = nullptr);
    ~removeItemForm();

private:
    Ui::removeItemForm *ui;
};

#endif // REMOVEITEMFORM_H
