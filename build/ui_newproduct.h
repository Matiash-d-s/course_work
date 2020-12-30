/********************************************************************************
** Form generated from reading UI file 'newproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPRODUCT_H
#define UI_NEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_newproduct
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QSpinBox *mBox;
    QSpinBox *pBox;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *newproduct)
    {
        if (newproduct->objectName().isEmpty())
            newproduct->setObjectName(QString::fromUtf8("newproduct"));
        newproduct->resize(400, 300);
        pushButton = new QPushButton(newproduct);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 250, 93, 28));
        pushButton_2 = new QPushButton(newproduct);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 250, 93, 28));
        lineEdit = new QLineEdit(newproduct);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 20, 221, 31));
        mBox = new QSpinBox(newproduct);
        mBox->setObjectName(QString::fromUtf8("mBox"));
        mBox->setGeometry(QRect(270, 60, 101, 31));
        mBox->setMaximum(10000);
        mBox->setSingleStep(10);
        mBox->setValue(500);
        pBox = new QSpinBox(newproduct);
        pBox->setObjectName(QString::fromUtf8("pBox"));
        pBox->setGeometry(QRect(270, 110, 101, 31));
        pBox->setMaximum(10000);
        pBox->setValue(100);
        comboBox = new QComboBox(newproduct);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 170, 101, 31));
        label = new QLabel(newproduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 81, 21));
        label_2 = new QLabel(newproduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 60, 121, 21));
        label_3 = new QLabel(newproduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 120, 101, 16));
        label_4 = new QLabel(newproduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 170, 111, 31));

        retranslateUi(newproduct);

        QMetaObject::connectSlotsByName(newproduct);
    } // setupUi

    void retranslateUi(QDialog *newproduct)
    {
        newproduct->setWindowTitle(QCoreApplication::translate("newproduct", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("newproduct", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("newproduct", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("newproduct", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("newproduct", "\320\234\320\260\321\201\321\201\320\260 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("newproduct", "\320\246\320\265\320\275\320\260 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("newproduct", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newproduct: public Ui_newproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPRODUCT_H
