#ifndef FINDITEMFORM_H
#define FINDITEMFORM_H

#include <QDialog>

namespace Ui {
class findItemForm;
}

class findItemForm : public QDialog
{
    Q_OBJECT

public:
    explicit findItemForm(QWidget *parent = nullptr);
    ~findItemForm();

private:
    Ui::findItemForm *ui;
};

#endif // FINDITEMFORM_H
