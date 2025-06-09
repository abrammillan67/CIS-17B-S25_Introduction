/********************************************************************************
** Form generated from reading UI file 'additemform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMFORM_H
#define UI_ADDITEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItemForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *idTextBox;
    QLineEdit *descTextBox;
    QLineEdit *locTextBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *AddItemForm)
    {
        if (AddItemForm->objectName().isEmpty())
            AddItemForm->setObjectName("AddItemForm");
        AddItemForm->resize(565, 415);
        buttonBox = new QDialogButtonBox(AddItemForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 270, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(AddItemForm);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 251, 51));
        idTextBox = new QLineEdit(AddItemForm);
        idTextBox->setObjectName("idTextBox");
        idTextBox->setGeometry(QRect(240, 90, 113, 21));
        descTextBox = new QLineEdit(AddItemForm);
        descTextBox->setObjectName("descTextBox");
        descTextBox->setGeometry(QRect(240, 130, 113, 21));
        locTextBox = new QLineEdit(AddItemForm);
        locTextBox->setObjectName("locTextBox");
        locTextBox->setGeometry(QRect(240, 180, 113, 21));
        widget = new QWidget(AddItemForm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 80, 261, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        retranslateUi(AddItemForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddItemForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddItemForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddItemForm);
    } // setupUi

    void retranslateUi(QDialog *AddItemForm)
    {
        AddItemForm->setWindowTitle(QCoreApplication::translate("AddItemForm", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("AddItemForm", "Enter item ID: ", nullptr));
        label_3->setText(QCoreApplication::translate("AddItemForm", "Enter item description:", nullptr));
        label_4->setText(QCoreApplication::translate("AddItemForm", "Enter item location:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemForm: public Ui_AddItemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMFORM_H
