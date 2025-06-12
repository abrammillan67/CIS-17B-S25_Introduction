/********************************************************************************
** Form generated from reading UI file 'removeitemform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEITEMFORM_H
#define UI_REMOVEITEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removeItemForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *removeItemForm)
    {
        if (removeItemForm->objectName().isEmpty())
            removeItemForm->setObjectName("removeItemForm");
        removeItemForm->resize(400, 300);
        buttonBox = new QDialogButtonBox(removeItemForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(removeItemForm);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 10, 91, 21));
        widget = new QWidget(removeItemForm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 70, 217, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(removeItemForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, removeItemForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, removeItemForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(removeItemForm);
    } // setupUi

    void retranslateUi(QDialog *removeItemForm)
    {
        removeItemForm->setWindowTitle(QCoreApplication::translate("removeItemForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("removeItemForm", "Remove Item", nullptr));
        label_2->setText(QCoreApplication::translate("removeItemForm", "Enter Item ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removeItemForm: public Ui_removeItemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEITEMFORM_H
