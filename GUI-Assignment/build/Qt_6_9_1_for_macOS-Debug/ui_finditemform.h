/********************************************************************************
** Form generated from reading UI file 'finditemform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDITEMFORM_H
#define UI_FINDITEMFORM_H

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

class Ui_findItemForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *findItemForm)
    {
        if (findItemForm->objectName().isEmpty())
            findItemForm->setObjectName("findItemForm");
        findItemForm->resize(450, 352);
        buttonBox = new QDialogButtonBox(findItemForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(120, 270, 161, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(findItemForm);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 61, 31));
        widget = new QWidget(findItemForm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 100, 209, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(findItemForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, findItemForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, findItemForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(findItemForm);
    } // setupUi

    void retranslateUi(QDialog *findItemForm)
    {
        findItemForm->setWindowTitle(QCoreApplication::translate("findItemForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("findItemForm", "Find Item", nullptr));
        label_2->setText(QCoreApplication::translate("findItemForm", "Enter Iem ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findItemForm: public Ui_findItemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDITEMFORM_H
